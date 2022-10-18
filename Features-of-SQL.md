# Some important commands of SQL:-  
## 1. The INSERT Command  
In its simplest form, INSERT is used to add a single tuple to a relation. We must specify the relation 
name and a list of values for the tuple. The values should be listed in the same order in which the
corresponding attributes were specified in the CREATE TABLE command.  
A second form of the INSERT statement allows the user to specify explicit attribute
names that correspond to the values provided in the INSERT command. This is useful if a relation has many attributes but only a few of those attributes are assigned
values in the new tuple. However, the values must include all attributes with NOT
NULL specification and no default value. Attributes with NULL allowed or DEFAULT
values are the ones that can be left out.  


## 2. The DELETE Command  
The DELETE command removes tuples from a relation. It includes a WHERE clause,
similar to that used in an SQL query, to select the tuples to be deleted. Tuples are
explicitly deleted from only one table at a time. However, the deletion may propagate to tuples in other relations if referential 
triggered actions are specified in the referential integrity.
Depending on the number of tuples selected by the condition in the WHERE clause, zero, one, or several 
tuples can be deleted by a single DELETE command. A missing WHERE clause
specifies that all tuples in the relation are to be deleted; however, the table remains
in the database as an empty table. We must use the DROP TABLE command to
remove the table definition.  


## 3. The UPDATE Command  
The UPDATE command is used to modify attribute values of one or more selected
tuples. As in the DELETE command, a WHERE clause in the UPDATE command
selects the tuples to be modified from a single relation. However, updating a
primary key value may propagate to the foreign key values of tuples in other relations if such a referential 
triggered action is specified in the referential integrity constraints of the DDL. An additional SET clause in the UPDATE
command specifies the attributes to be modified and their new values.
It is also possible to specify NULL or DEFAULT as the new attribute value. Notice that
each UPDATE command explicitly refers to a single relation only. To modify multiple
relations, we must issue several UPDATE commands.


# SQL has a number of additional features:-
## These are as follows:  
■ Various techniques for specifying complex retrieval
queries, including nested queries, aggregate functions, grouping, joined
tables, outer joins, and recursive queries; SQL views, triggers, and assertions;
and commands for schema modification.  

■ SQL has various techniques for writing programs in various programming
languages that include SQL statements to access one or more databases.
These include embedded (and dynamic) SQL, SQL/CLI (Call Level
Interface) and its predecessor ODBC (Open Data Base Connectivity), and
SQL/PSM (Persistent Stored Modules).Access SQL databases through the Java
programming language using JDBC and SQLJ.  

■ Each commercial RDBMS will have, in addition to the SQL commands, a set
of commands for specifying physical database design parameters, file structures for relations, 
and access paths such as indexes. We called these commands a storage definition language (SDL). Earlier versions of
SQL had commands for creating indexes, but these were removed from the language because they
were not at the conceptual schema level. Many systems still have the CREATE INDEX commands.  

■ SQL has transaction control commands. These are used to specify units of
database processing for concurrency control and recovery purposes.  

■ SQL has language constructs for specifying the granting and revoking of privileges to users.
Privileges typically correspond to the right to use certain SQL
commands to access certain relations. Each relation is assigned an owner,
and either the owner or the DBA staff can grant to selected users the privilege to use an SQL 
statement—such as SELECT, INSERT, DELETE, or
UPDATE—to access the relation. In addition, the DBA staff can grant the
privileges to create schemas, tables, or views to certain users. These SQL
commands—called GRANT and REVOKE.  

■ SQL has language constructs for creating triggers. These are generally
referred to as active database techniques, since they specify actions that are
automatically triggered by events such as database updates.  

■ SQL has incorporated many features from object-oriented models to have
more powerful capabilities, leading to enhanced relational systems known as
object-relational. Capabilities such as creating complex-structured attributes 
(also called nested relations), specifying abstract data types (called
UDTs or user-defined types) for attributes and tables, creating object identifiers for 
referencing tuples, and specifying operations on types.  

■ SQL and relational databases can interact with new technologies such as
XML and OLAP.  


# Summary:-  
SQL language and its variations have been implemented as 
interfaces to many commercial relational DBMSs,
including Oracle’s Oracle and Rdb13; IBM’s DB2, Informix Dynamic Server, and
SQL/DS; Microsoft’s SQL Server and Access; and INGRES. Some open source systems also provide SQL, 
such as MySQL and PostgreSQL. The original version of
SQL was implemented in the experimental DBMS called SYSTEM R, which was
developed at IBM Research. SQL is designed to be a comprehensive language that
includes statements for data definition, queries, updates, constraint specification,
and view definition.  

The SQL language, originally named SEQUEL, was based on the language SQUARE
(Specifying Queries as Relational Expressions), described by Boyce et al. (1975). The
syntax of SQUARE was modified into SEQUEL (Chamberlin and Boyce, 1974) and
then into SEQUEL 2 (Chamberlin et al. 1976), on which SQL is based. The original
implementation of SEQUEL was done at IBM Research, San Jose, California.  


# Reference:-  
## Book Name: Fundamentals of Database Systems  
## Authors: Ramez Elmasri and Shamkant B. Navathe  




