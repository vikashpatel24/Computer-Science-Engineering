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
 &nbsp;
SELECT is used to specify all columns we need to display in the resulting table. FROM specifies the tables where we need to look for these columns. The type of join, i.e., CROSS JOIN in this case, is placed between the two tables we wish to join.<br><br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Example :**:&nbsp;&nbsp;`Let’s consider the scenario, where the first table contains customer details, i.e., customer id and customer name and the second table contains shopping details, i.e., product id and product name.Write a query to give the cartesian product of the Customers and Shopping_Details tables.
` <br>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Query**:&nbsp;&nbsp;`SELECT *
FROM Customers CROSS JOIN Shopping_Details;
` <br>


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
