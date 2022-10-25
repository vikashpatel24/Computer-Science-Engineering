# SQL KEYS

## PRIMARY KEY

A column or columns is called **primary key (PK)** that uniquely identifies each row in the table.
When multiple columns are used as a primary key, it is known as _composite primary key_.

To create a primary key, we should define a PRIMARY KEY constraint when we create or modify a table.

**Characteristics of primary key :**

- It enforces the entity integrity of the table.
- It always has unique data.
- It cannot have null value.
- There can be no duplicate value for a primary key.
- A table can contain only one primary key constraint.

**_Defining a Primary Key_**<br><br>
**For one column:**<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;CREATE TABLE Students<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Roll_No int NOT NULL,<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Name varchar(30),<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;City varchar(50),<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;PRIMARY KEY(Roll_No)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;)<br>
<br>
**For multiple columns:**<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;CREATE TABLE Students<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Roll_No int NOT NULL,<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Name varchar(30),<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;City varchar(50),<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;CONSTRAINT pk_Student PRIMARY KEY(Roll_No, Department)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;)

## FOREIGN KEY

A foreign key is a field or a column that is used to establish a link between two tables.

**Characteristics:**

- It is a key that acts as a primary key in one table and acts as secondary key in another table.
- It combines two or more relations (table) at a time.
- They act as a cross-reference between the tables.

Here are two tables first one is students table and second is orders table.
Here orders are given by students.

<table>
  <tr>
    <th>Roll_No</th>
    <th>Name</th>
    <th>City</th>
  </tr>
  <tr>
    <td>1</td>
    <td>Anu</td>
    <td>Lucknow</td>
  </tr>
  <tr>
    <td>2</td>
    <td>Deep</td>
    <td>Kolkata</td>
  </tr>
  <tr>
    <td>3</td>
    <td>Oshi</td>
    <td>Ranchi</td>
  </tr>
  <tr>
    <td>4</td>
    <td>Srishti</td>
    <td>Patna</td>
  </tr>
</table>

<table>
  <tr>
    <th>Order_Id</th>
    <th>Order_No</th>
    <th>Roll_No</th>
  </tr>
  <tr>
    <td>1</td>
    <td>35466</td>
    <td>2</td>
  </tr>
  <tr>
    <td>2</td>
    <td>98947</td>
    <td>2</td>
  </tr>
  <tr>
    <td>3</td>
    <td>48775</td>
    <td>4</td>
  </tr>
  <tr>
    <td>4</td>
    <td>62165</td>
    <td>1</td>
  </tr>
  <tr>
    <td>5</td>
    <td>77874</td>
    <td>3</td>
  </tr>
</table>

- The "Roll_No" column in the "Students" table is the PRIMARY KEY in the "Students" table.
- The "Roll_No" column in the "Orders" table is a FOREIGN KEY in the "Orders" table.

**_Defining a Foriegn Key_**

To create a foreign key on the "Roll_No" column when the "Orders" table is created:

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;CREATE TABLE Orders<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Order_Id int NOT NULL,<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Order_No int NOT NULL,<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Roll_No int,<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;PRIMARY KEY(Order_Id)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;FOREIGN KEY (Roll_No) REFERENCES Students (Roll_No)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;)

## COMPOSITE KEY

A composite key is a combination of two or more columns in a table that can be used to uniquely identify each row in the table.

Sometimes more than one attributes are needed to uniquely identify an entity. A primary key that is made by the combination of more than one attribute is known as a **composite key**.

**Characteristics:**

- It acts as a primary key if there is no primary key in a table
- Two or more attributes are used to together to make a composite key.
- Different combinations of attributes may give different accuracy in terms of identifying the rows uniquely.

**Syntax:**<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;CREATE TABLE table_name<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(column_1 data_type_1,<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; column_2, data_type_2,<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;....<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;PRIMARY KEY(column1, column_2, ...));<br>

**Ex:**<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;CREATE TABLE Students<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(COL1 INTEGER,<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; COL2 VARCHAR(30),<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; COL3 VARCHAR(20)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;PRIMARY KEY(COL1, COL2));

_Here, composite key created consist of COLUMN_1 and COLUMN_2._

## UNIQUE KEY

A unique key is a set of one or more than one fields/columns of a table that uniquely identifies a record in a database table.

**NOTE:** It is little like primary key but it can accept only one null value and it cannot have duplicate values.

**_Defining a unique key:_**

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;CREATE TABLE Students<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Roll_No int NOT NULL,<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Name varchar(30),<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;City varchar(50),<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;UNIQUE (Roll_No)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;)

## CANDIDATE KEY

The minimal set of attributes that can uniquely identify a tuple is known as a candidate key.

**Characteristics:**

- It is a minimal super key.
- It is a super key with no repeated data.
- It must contain unique values.
- It can contain NULL values.
- Every table must have at least a single candidate key.

## SUPER KEY

The set of attributes that can uniquely identify a tuple is known as Super Key.

**Characteristics:**

- Adding zero or more attributes to the candidate key generates the super key.
- A candidate key is a super key but vice versa is not true.

## ALTERNATE KEY

The candidate key other than the primary key is called an alternate key.

**Characteristics:**

- All the keys which are not primary keys are called alternate keys.
- It contains two or more fields to identify two or more records.
- These values are repeated.
