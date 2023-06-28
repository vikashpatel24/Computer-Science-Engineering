
Colab Basics                                                 

TF2.0 Loading Data :

# download the data from a URL
# source: https://archive.ics.uci.edu/ml/datasets/Arrhythmia
# alternate URL: https://lazyprogrammer.me/course_files/arrhythmia.data
#!wget --no-check-certificate https://archive.ics.uci.edu/ml/machine-learning-databases/arrhythmia/arrhythmia.data
!wget https://lazyprogrammer.me/course_files/arrhythmia.data


# use keras get_file to download the auto MPG dataset
# source: https://archive.ics.uci.edu/ml/datasets/Auto+MPG
#url = 'https://archive.ics.uci.edu/ml/machine-learning-databases/auto-mpg/auto-mpg.data'


### alternate URL :

url = 'https://raw.githubusercontent.com/lazyprogrammer/machine_learning_examples/master/tf2.0/auto-mpg.data'

# another method: upload your own file

# if you must, then get the file from here:
# https://raw.githubusercontent.com/lazyprogrammer/machine_learning_examples/master/tf2.0/daily-minimum-temperatures-in-me.csv

Machine Learning Basics =>

TF2.0 Linear Regression :
!wget https://raw.githubusercontent.com/lazyprogrammer/machine_learning_examples/master/tf2.0/moore.csv

ANN

CNN

RNN
TF2.0 Stock Returns
# yes, you can read dataframes from URLs!
df = pd.read_csv('https://raw.githubusercontent.com/lazyprogrammer/machine_learning_examples/master/tf2.0/sbux.csv')

Natural Language Processing :

TF2.0 Spam Detection
# Unfortunately this URL doesn't work directly with pd.read_csv
!wget -nc https://lazyprogrammer.me/course_files/spam.csv

Recommender Systems :

# data is from: https://grouplens.org/datasets/movielens/
# in case the link changes in the future


!wget -nc http://files.grouplens.org/datasets/movielens/ml-20m.zip

Transfer Learning : 
# Data from: https://mmspg.epfl.ch/downloads/food-image-datasets/
# !wget --passive-ftp --prefer-family=ipv4 --ftp-user FoodImage@grebvm2.epfl.ch \
#  --ftp-password Cahc1moo -nc ftp://tremplin.epfl.ch/Food-5K.zip
!wget -nc https://lazyprogrammer.me/course_files/Food-5K.zip


                               STANFORD'S LECTURES ON ARTIFICIAL INTELLIGENCE

https://www.youtube.com/watch?v=J8Eh7RqggsU&list=PLoROMvodv4rO1NB9TD4iUZ3qghGEGtqNX
