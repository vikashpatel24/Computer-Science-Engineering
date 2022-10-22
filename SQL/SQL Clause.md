# SQL CLAUSE

Clauses are in-built functions in SQL. With the help of clauses, we can deal with data easily stored in the table. They help us filter and analyze data quickly. When we have large amounts of data stored in the database, we use **Clauses** to query and get data required by the user.

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

## SQL WHERE

A **WHERE** clause is a data manipulation language statement. It can be used to limit the number of rows affected by a SQL DML statement or returned by a query. It filters the records and returns only those queries which fulfill the specific conditions.

_WHERE clause is used in SELECT, UPDATE, DELETE statement etc._

Syntax:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT column_name_1, column_name_2,...`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM table_name;`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`WHERE (condition)`

Ex:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT Name, Department`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM Students`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`WHERE Age=21`

Output:<br>

<table>
    <tr>
        <th>Name</th>
        <th>Department</th>
    </tr>
    <tr>
        <td>Anu</td>
        <td>CSE</td>
    </tr>
    <tr>
        <td>Priya</td>
        <td>EE</td>
    </tr>
</table>

## SQL AND

It is used to create two or more conditions to be met. It is also used to join multiple tables in a SQL statement.

_AND clause is used in SQL SELECT, INSERT, UPDATE and DELETE_

Syntax:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT column_name_1, column_name_2,...`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM table_name;`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`WHERE condition_1 AND condition_2`

Ex:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT *`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM STUDENTS`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`WHERE Department = 'CSE' AND City = 'Lucknow'`

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
    <td>1</td>
    <td>Anu</td>
    <td>CSE</td>
    <td>21</td>
    <td>Lucknow</td>
  </tr>
</table>

## SQL OR

The **OR** clause is used to create a SQL statement where records are returned when any one condition met.

_OR clause is used in SQL SELECT, INSERT, UPDATE and DELETE_

Syntax:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT column_name_1, column_name_2,...`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM table_name;`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`WHERE condition_1 OR condition_2`

Ex:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT *`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM Students`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`WHERE Department = 'CSE' OR City = 'Kolkata'`

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
    <td>5</td>
    <td>Srishti</td>
    <td>CSE</td>
    <td>22</td>
    <td>Patna</td>
  </tr>
</table>

## SQL AS

It is used to assign a new name temporarily to a table column or even a table.

It makes an easy presentation of query results and allows the developer to label results more accurately without permanently renaming table columns or even the table itself.

Syntax:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT column_name_1 AS new_column_name, column_name_2,...`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM table_name;`<br>

Ex:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT City AS new_city`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM Students`

Output:<br>

<table>
    <tr>
        <th>new_city</th>
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
    <tr>
        <td>Lucknow</td>
    </tr>
    <tr>
        <td>Patna</td>
    </tr>
</table>

## SQL HAVING

It is used in database systems to fetch the data/values from the groups according to the given condition. It is always executed with the **GROUP BY** clause.

Syntax:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT column_name_1, column_name_2,...`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM table_name;`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`GROUP BY column_name`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`HAVING (condition)`

Ex:<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`SELECT SUM(Age), City`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`FROM Students`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`GROUP BY City`<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`HAVING Age<=22`

Output:<br>

<table>
    <tr>
        <th>SUM(Age)</th>
        <th>City</th>
    </tr>
    <tr>
        <td>42</td>
        <td>Lucknow</td>
    </tr>
    <tr>
        <td>22</td>
        <td>Ranchi</td>
    </tr>
    <tr>
        <td>22</td>
        <td>Patna</td>
    </tr>
</table>
