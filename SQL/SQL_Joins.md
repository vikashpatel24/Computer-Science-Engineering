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
