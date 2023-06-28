
# source code :> https://www.bmc.com/blogs/create-neural-network-with-tensorflow/

# CODE
import pandas as pd

def yesNo(x):
if x=="YES":
        return 1
    else:
        return 0
def toOrd(str):
    x=0
    for l in str:
        x += ord(l)
    return int(x)

# DATA LINK/RELATIONS    
cols = ['User country', 'Nr. reviews','Nr. hotel reviews','Helpful votes',
        'Score','Period of stay','Traveler type','Pool','Gym','Tennis court',
        'Spa','Casino','Free internet','Hotel name','Hotel stars','Nr. rooms',
        'User continent','Member years','Review month','Review weekday']

df = pd.read_csv('/home/walker/TripAdvisor.csv',sep=',',header=0)

# Prerequisites for building our neural network
# DISCRIPTION 
User country,Nr. reviews,Nr. hotel reviews,Helpful votes,Score,Period of stay,
Traveler type,Pool,Gym,Tennis court,Spa,Casino,Free internet,Hotel name,
Hotel stars,Nr. rooms,User continent,Member years,Review month,Review weekday

# CODE
import tensorflow as tf

feature_names = ['Usercountry', 'Nrreviews','Nrhotelreviews','Helpfulvotes','Score','Periodofstay',
         'Travelertype','Pool','Gym','Tenniscourt','Spa','Casino','Freeinternet','Hotelname',
'Hotelstars','Nrrooms','Usercontinent','Memberyears','Reviewmonth','Reviewweekday']

# MATRIX FIED REPRESENTATION
FIELD_DEFAULTS = [[0], [0], [0], [0], [0],
                 [0], [0], [0], [0], [0],
                 [0], [0], [0], [0], [0],
                 [0], [0], [0], [0], [0], [0]

# PARSE METHOD
def parse_line(line):
   parsed_line = tf.decode_csv(line, FIELD_DEFAULTS)
   label = parsed_line[4]
   del parsed_line[4]
   features = parsed_line
   d = dict(zip(feature_names, features))
   print ("dictionary", d, " label = ", label)
   return d, label

# CSV FILE IMPORTING THE PATH AND SIZE OF ANN
def csv_input_fn(csv_path, batch_size):
   dataset = tf.data.TextLineDataset(csv_path)
   dataset = dataset.map(parse_line)
   dataset = dataset.shuffle(1000).repeat().batch(batch_size)
   return dataset

# FEATURES
tf.feature_column.indicator_column(tf.feature_column.categorical_column_with_identity("Usercountry",47))

Nrreviews = tf.feature_column.numeric_column("Nrreviews")

# SEVERAL TEST CASES (SELECT ANY FEW FOR CONFORMATION)
Usercountry = tf.feature_column.indicator_column(tf.feature_column.categorical_
column_with_identity("Usercountry",47))
Nrreviews = tf.feature_column.numeric_column("Nrreviews")
Nrhotelreviews = tf.feature_column.numeric_column("Nrhotelreviews")
Helpfulvotes = tf.feature_column.numeric_column("Helpfulvotes")
Periodofstay = tf.feature_column.numeric_column("Periodofstay")
Travelertype =
tf.feature_column.indicator_column(tf.feature_column.categorical_column_with_identity("Travelertype",5))
Pool =
tf.feature_column.indicator_column(tf.feature_column.categorical
_column_with_identity("Pool",2))
Gym =
tf.feature_column.indicator_column(tf.feature
_column.categorical_column_with_identity("Gym",2))
Tenniscourt =
tf.feature_column.indicator_column(tf.feature_column.categorical
_column_with_identity("Tenniscourt",2))
Spa =
tf.feature_column.indicator_column(tf.feature_column.categorical
_column_with_identity("Spa",2))
Casino =
tf.feature_column.indicator_column(tf.feature_column.categorical
_column_with_identity("Casino",2))
Freeinternet =
tf.feature_column.indicator_column(tf.feature_column.categorical
_column_with_identity("Freeinternet",2))
Hotelname =
tf.feature_column.indicator_column(tf.feature_column.categorical
_column_with_identity("Hotelname",24))
Hotelstars =
tf.feature_column.indicator_column(tf.feature_column.categorical
_column_with_identity("Hotelstars",5))
Nrrooms =
tf.feature_column.numeric_column("Nrrooms")
Usercontinent =
tf.feature_column.indicator_column(tf.feature_column.categorical
_column_with_identity("Usercontinent",6))
Memberyears = tf.feature_column.numeric_column("Memberyears")
Reviewmonth =
tf.feature_column.indicator_column(tf.feature_column.categorical
_column_with_identity("Reviewmonth",12))
Reviewweekday =
tf.feature_column.indicator_column(tf.feature_column.categorical
_column_with_identity("Reviewweekday",7))
feature_columns = [Usercountry, Nrreviews,Nrhotelreviews,Helpfulvotes,Periodofstay,
Travelertype,Pool,Gym,Tenniscourt,Spa,Casino,Freeinternet,Hotelname,Hotelstars,Nrrooms,
Usercontinent,Memberyears,Reviewweekday]

# ACCESSING THE HIDDEN LAYES AND BELOW TRAINING THEM 
classifier=tf.estimator.DNNClassifier(
feature_columns=feature_columns,
hidden_units=[10, 10],
n_classes=5,
model_dir="/tmp")
batch_size = 100

classifier.train(
steps=1000,
input_fn=lambda : csv_input_fn("/home/walker/tripAdvisorFL.csv", batch_size))