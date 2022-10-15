# What are Joins?
  &nbsp;
SQL Joins are mostly used when a user is trying to extricate data from multiple tables (which have one-to-many or many-to-many relationships with each other) at one time. Join keyword merges two or more tables and creates a temporary image of the merged table.<br><br>


## Types of SQL Joins

1. **Cartesian / Cross Joins**

   &nbsp;The Cartesian Join also known as Cross Join is the cartesian product of all the rows of the first table with all the rows of the second table.

Let’s say if we have m rows in the first table and n rows in the second table, then the resulting cartesian join table will have m*n rows. This usually happens when the matching column or WHERE condition is not specified.<br><br>
   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
   **Syntax**:&nbsp;&nbsp;`SELECT column-name(s)
FROM table1 CROSS JOIN table2;` <br>
 &nbsp;
SELECT is used to specify all columns we need to display in the resulting table. FROM specifies the tables where we need to look for these columns. The type of join, i.e., CROSS JOIN in this case, is placed between the two tables we wish to join.<br><br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Example :**:&nbsp;
    &nbsp;
Let’s consider the scenario, where the first table contains customer details, i.e., customer id and customer name and the second table contains shopping details, i.e., product id and product name.Write a query to give the cartesian product of the Customers and Shopping_Details tables.<br><br>

 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Query**:&nbsp;&nbsp;`SELECT *
FROM Customers CROSS JOIN Shopping_Details;
` <br>


2. **Self Join**

  In SQL Self Join, a table is joined to itself. This means each row of the table is joined with itself and all other rows concerning stated conditions if any. In other words, we can say that it is a merge between two copies of the same table. This is extremely helpful when the foreign key references the primary key of the same table.
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
    **Syntax**:&nbsp;&nbsp;`SELECT a.column1 , b.column2
FROM table_name a, table_name b
WHERE some_condition;` <br>
 
 &nbsp;
Here we reference the same table with different names, i.e., a and b. This signifies a SELF JOIN.<br><br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Example :**:&nbsp;
    &nbsp;Let’s consider an employee table with employee id, name, phone number, and supervisor id. The supervisors are present in the employee table itself and hence, supervisor id acts like a foreign key which is also the primary key as it references the employee id.Write a query to get all the employees which are also supervisors of some other employees from the given employees table.<br><br>
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Query**:&nbsp;&nbsp;`SELECT a.Name AS Supervisors
FROM Employees a, Employees b
WHERE a.ID = b.supervisor_ID;
` <br>


 
3. **Inner / Equi Join**

SQL Inner Join or Equi Join is the most simple join where all rows from the intended tables are cached together if they meet the stated condition. Two or more tables are required for this join. Inner Join can be used with various SQL conditional statements like WHERE, GROUP BY, ORDER BY, etc.
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
   **Syntax**:&nbsp;&nbsp;`SELECT column-name 
FROM table-1 INNER JOIN table-2 
WHERE table-1.column-name = table-2.column-name;
` <br>
 &nbsp;
We can alternately use just the “JOIN” keyword instead of “INNER JOIN”.<br><br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Example :**:&nbsp;
    &nbsp;
Let’s consider two tables of a supermarket set-up. The first table named Customers gives us information about different customers, i.e., their customer id, name and phone number. Here, CustID is the primary key that uniquely identifies each row. The second table named Shopping_Details, gives us information about items bought by customers, i.e., item id, customer id (referencing the customer that bought the item), item name, and quantity.Write a query to get all the customers who have bought items from the store. Display their name, item bought, and quantity.<br><br>

 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Query**:&nbsp;&nbsp;`**SELECT Customers.Name, Shopping_Details.Item_Name, Shopping_Details.Quantity
FROM Customers INNER JOIN Shopping_Details
WHERE Customers.ID==Shopping_Details.ID;
**
` <br>
**Special Case of Inner Join: Natural Join**
SQL Natural Join is a type of Inner join which is based on the condition that columns having the same name and same datatype present in both the tables to be joined.

  **Syntax**:&nbsp;&nbsp;`SELECT * FROM 
table-1 NATURAL JOIN table-2;

` <br>
 &nbsp;
We can alternately use just the “JOIN” keyword instead of “INNER JOIN”.<br><br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Example :**:&nbsp;
    &nbsp;
Let’s consider two tables of a supermarket set-up. The first table named Customers gives us information about different customers, i.e., their customer id, name and phone number. Here, CustID is the primary key that uniquely identifies each row. The second table named Shopping_Details gives us information about items bought by customers, i.e., item id, customer id (referencing the customer that bought the item), item name, and quantity.Write a query to find all details of customers who bought something from the store.<br><br>

 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Query**:&nbsp;&nbsp;`**
SELECT *
FROM Customers NATURAL JOIN Shopping_Details;

**


4. **Left Outer Join**

In this join a.k.a. SQL Left Join, all the rows of the left-hand table, regardless of following the stated conditions are added to the output table. Whereas, only matching rows of the right-hand table are added.

Rows belonging to the left-hand table, and not having values from the right-hand table are presented as NULL values in the resulting table.
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
  
   **Syntax**:&nbsp;&nbsp;`SELECT column-name(s)
FROM table1 LEFT OUTER JOIN table2
ON table1.column-name = table2.column-name;
` <br>

  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Example :**:&nbsp;
    &nbsp;
Let’s consider two tables of a supermarket set-up. The first table named Customers gives us information about different customers, i.e., their customer id, name and phone number. Here, CustID is the primary key that uniquely identifies each row. The second table named Shopping_Details, gives us information about items bought by customers, i.e., item id, customer id (referencing the customer that bought the item), item name, and quantity.Write a query to display all customers irrespective of items bought or not. Display the name of the customer and item bought. If nothing is bought, display NULL.<br><br>

 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Query**:&nbsp;&nbsp;`**SELECT Customers. Name, Shopping_Details.Item_Name
FROM Customers LEFT OUTER JOIN Shopping_Details;
ON Customers.ID = Shopping_Details.ID;
**
` <br>

  
