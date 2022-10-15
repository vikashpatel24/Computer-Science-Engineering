# What are Joins?
  &nbsp;
SQL Joins are mostly used when a user is trying to extricate data from multiple tables (which have one-to-many or many-to-many relationships with each other) at one time. Join keyword merges two or more tables and creates a temporary image of the merged table.<br><br>


## Types of SQL Joins

1. **Cartesian / Cross Joins**

   &nbsp;The Cartesian Join a.k.a. Cross Join is the cartesian product of all the rows of the first table with all the rows of the second table.

Let’s say if we have m rows in the first table and n rows in the second table, then the resulting cartesian join table will have m*n rows. This usually happens when the matching column or WHERE condition is not specified.<br><br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**:&nbsp;&nbsp;`SELECT column-name(s)
FROM table1 CROSS JOIN table2;
` <br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;CREATE DATABASE School <br><br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `CREATE TABLE TableName`<br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;CREATE TABLE Student

2. **ALTER**

   Used to change the structure of the table

   - Add a new column <br><br>
     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `ALTER TABLE TableName ADD ColumnName datatype(value)`<br>
     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ALTER TABLE Student ADD age NUMBER(2)<br>
   - Remove an existing column <br><br>
     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `ALTER TABLE TableName DROP COLUMN ColumnName `<br>
     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ALTER TABLE Student DROP COlUMN address<br>

   - Rename the existing column <br><br>
     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `ALTER TABLE TableName RENAME COLUMN oldColumnName TO newColumnName`<br>
     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ALTER TABLE Student RENAME COLUMN email TO emailid <br>

   - Increase or decrease the column size <br><br>
     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `ALTER TABLE TableName MODIFY ColumnName datatype(newValue)`<br>
     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ALTER TABLE Student MODIFY emailid VARCHAR(30) <br>
   - Change the column data type <br><br>
     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `ALTER TABLE TableName MODIFY ColumnName datatype`<br>
     &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;ALTER TABLE Student MODIFY DateofBirth year<br>

3. **TRUNCATE**
