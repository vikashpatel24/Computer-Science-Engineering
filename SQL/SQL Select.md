# SQL SELECT

The SELECT statement is the most commonly used command in SQL. It is used to access the records from one or more database tables and views. It also retrieves the selected data that follow the conditions we want.

Considering the table **Students** given below, we'll follow all the syntaxes and examples :

<table>
  <tr>
    <th>Roll No</th>
    <th>Name</th>
    <th>Department</th>
    <th>Age</th>
    <th>City</th>
  </tr>
  <tr>
    <td>1</td>
    <td>Anu</td>
    <td>CSE</td>
    <td>21</td>
    <td>Lucknow</td>
  </tr>
  <tr>
    <td>2</td>
    <td>Deep</td>
    <td>ECE</td>
    <td>23</td>
    <td>Kolkata</td>
  </tr>
  <tr>
    <td>3</td>
    <td>Oshi</td>
    <td>IT</td>
    <td>22</td>
    <td>Ranchi</td>
  </tr>
  <tr>
    <td>4</td>
    <td>Priya</td>
    <td>EE</td>
    <td>21</td>
    <td>Lucknow</td>
  </tr>
  <tr>
    <td>5</td>
    <td>Srishti</td>
    <td>CSE</td>
    <td>22</td>
    <td>Patna</td>
  </tr>
</table>

Syntax :<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT Column_1, Column_2, ....., Column__N FROM Table_Name`

Ex :<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT Name, Age FROM Students`

Output:<br>

<table>
  <tr>
    <th>Name</th>
    <th>Age</th>
  </tr>
  <tr>
    <td>Anu</td>
    <td>21</td>
  </tr>
  <tr>
    <td>Deep</td>
    <td>23</td>
  </tr>
  <tr>
    <td>Oshi</td>
    <td>22</td>
  </tr>
  <tr>
    <td>Priya</td>
    <td>21</td>
  </tr>
  <tr>
    <td>Srishti</td>
    <td>22</td>
  </tr>
</table>
<br>

**NOTE** : To retrieve all the rows of table, use `SELECT * FROM table_name`

## SELECT DISTINCT

It is used to retrieve only distinct or unique data. In a table, there may be a chance to exist a duplicate value and sometimes we want to retrieve only unique values. In such scenarios, SQL SELECT DISTINCT statement is used.

Syntax:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT DISTINCT column_name_1, column_name_2,...`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM table_name;`

Ex:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT DISTINCT City`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM Students`

Output:<br>

<table>
  <tr>
    <th>City</th>
  </tr>
  <tr>
    <td>Lucknow</td>
  <tr>
  <tr>
    <td>Kolkata</td>
  </tr>
  <tr>
    <td>Ranchi</td>
  </tr>
  <tr>
    <td>Patna</td>
  </tr>
</table>

## SELECT COUNT

It returns the number of records of the table in the output.

Syntax:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT COUNT(column_name)`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM table_name;`

Ex:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT COUNT(Name)`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM Students`

Output:<br>

<table>
  <tr>
    <th>COUNT(Name)</th>
  </tr>
  <tr>
    <td>5</td>
  </tr> 
</table>

## SELECT TOP

It shows the limited number of records or rows from the database table. The TOP clause in the statement specifies how many rows are returned.

Syntax:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT TOP 3 column_name_1, column_name_2,...`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM table_name;`

Ex:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT TOP 3 City`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM Students`

Output:<br>

<table>
  <tr>
    <th>City</th>
  </tr>
  <tr>
    <td>Lucknow</td>
  </tr>
  <tr>
    <td>Kolkata</td>
  </tr>
  <tr>
    <td>Ranchi</td>
  </tr>
</table>

## SELECT FIRST

It is used to return the first value of the selected column.

Syntax:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT FIRST column_name_1, column_name_2,...`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM table_name;`

Ex:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT FIRST Name as first_name`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM Students`

Output:<br>

<table>
  <tr>
    <th>first_name</th>
  </tr>
  <tr>
    <td>Anu</td>
  </tr>
</table>

## SELECT LAST

It shows the last value from the specified column of the table.

Syntax:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT LAST column_name_1, column_name_2,...`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM table_name;`

Ex:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT LAST City AS last_city`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM Students`

Output:<br>

<table>
  <tr>
    <th>last_city</th>
  </tr>
  <tr>
    <td>Patna</td>
  </tr>
</table>

## SELECT RANDOM

It returns the random row. It can be used in online exam to display the random questions.

Syntax:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT column_name`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM table_name;`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`ORDER BY RAND`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`LIMIT 1`

Ex:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT *`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM Students;`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`ORDER BY RAND`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`LIMIT 1`

Output:<br>

<table>
  <tr>
    <th>Roll No</th>
    <th>Name</th>
    <th>Department</th>
    <th>Age</th>
    <th>City</th>
  </tr>
  <tr>
    <td>3</td>
    <td>Oshi</td>
    <td>IT</td>
    <td>22</td>
    <td>Ranchi</td>
  </tr>
</table>
