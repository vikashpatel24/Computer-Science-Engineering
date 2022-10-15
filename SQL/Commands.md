# Commands of SQL

## 1. Data Definition Language (DDL)

1. **CREATE**

   &nbsp;Used to create a table or database <br><br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**:&nbsp;&nbsp;`CREATE DATABASE DatabaseName` <br>
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

   Removes all the rows from the table <br><br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `TRUNCATE TABLE TableName`<br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;TRUNCATE TABLE Student

4. **DROP**

   Drops the entire table structure <br><br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `DROP TABLE TableName`<br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;DROP TABLE Student

## 2. Data Manipulation Language (DML)

1. **INSERT**

   Insert rows to tables <br><br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `INSERT INTO TableName(column1, column2,...) VALUES(value1, value2,...)`<br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;INSERT INTO Student(RollNo, Name, Age) VALUES (1, 'Srishti', 21)

2. **UPDATE**

   Modify existing rows in a table <br><br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `UPDATE TableName SET ColumnName = value [WHERE condition]`<br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;UPDATE Student SET Age = 22 WHERE RollNo = 1;

3. **SELECT**

   Used to retrieve rows from a database or a table<br><br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `SELECT ColumnName FROM TableName`<br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;SELECT Name FROM Student

4. **DELETE**

   Remove existing rows from the table <br><br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Syntax**: `DELETE FROM TableName [WHERE condition]`<br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Ex**:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;DELETE FROM Student WHERE RollNo = 3;

## 3. Data Control Language (DCL)

1. **GRANT**

   Gives users access privileges to the database

2. **REVOKE**

   Withdraws the user’s access privileges given by using the GRANT command

## 4. Transaction Control Language (TCL)

1. **COMMIT**

   Commits a transaction

2. **ROLLBACK**

   Rollbacks a transaction in case of any error occurs

3. **SAVEPOINT**

   Sets a savepoint within a transaction
