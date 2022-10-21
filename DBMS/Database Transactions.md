
# What is a Database Transaction?
A **Database Transaction** is a logical unit of processing in a DBMS which entails one or more database access operation. In a nutshell, database transactions represent real-world events of any enterprise.

All types of database access operation which are held between the beginning and end transaction statements are considered as a single logical transaction in DBMS. During the transaction the database is inconsistent. Only once the database is committed the state is changed from one consistent state to another.<br><br>

![Screenshot (259)](https://user-images.githubusercontent.com/67328331/196790009-6c29b8ea-bd3b-43bd-a137-3efa721f469f.png)
<br><br>


# Facts about Database Transactions

- A transaction is a program unit whose execution may or may not change the contents of a database.<br>
- The transaction concept in DBMS is executed as a single unit.<br>
- If the database operations do not update the database but only retrieve data, this type of transaction is called a read-only transaction.<br>
- A successful transaction can change the database from one CONSISTENT STATE to another.<br>
- DBMS transactions must be atomic, consistent, isolated and durable.<br>
- If the database were in an inconsistent state before a transaction, it would remain in the inconsistent state after the transaction.<br><br>

# Why do you need concurrency in Transactions?

A database is a shared resource accessed. It is used by many users and processes concurrently. For example, the banking system, railway, and air reservations systems, stock market monitoring, supermarket inventory, and checkouts, etc.

Not managing concurrent access may create issues like:

- Hardware failure and system crashes.<br>
- Concurrent execution of the same transaction, deadlock, or slow performance.<br><br>

# States of Transactions
The various states of a transaction concept in DBMS are listed below:<br>

![Screenshot (260)](https://user-images.githubusercontent.com/67328331/196790481-a6d369f8-5ecc-4f57-a427-2de212facbc4.png)
<br><br>
![Screenshot (261)](https://user-images.githubusercontent.com/67328331/196790778-43eda681-aae0-42d1-8efb-a26f8b1dd58e.png)
<br><br>


**Let’s study a state transition diagram that highlights how a transaction moves between these various states:**

**1.** Once a transaction states execution, it becomes active. It can issue READ or WRITE operation.<br>
**2.** Once the READ and WRITE operations complete, the transactions becomes partially committed state.<br>
**3.** Next, some recovery protocols need to ensure that a system failure will not result in an inability to record changes in the transaction permanently. If this check is a success, the transaction commits and enters into the committed state.<br>
**4.** If the check is a fail, the transaction goes to the Failed state.<br>
**5.** If the transaction is aborted while it’s in the active state, it goes to the failed state. The transaction should be rolled back to undo the effect of its write operations on the database.<br>
**6.** The terminated state refers to the transaction leaving the system.<br><br>


# What are ACID Properties?

ACID Properties are used for maintaining the integrity of database during transaction processing. ACID in DBMS stands for **Atomicity**, **Consistency**, **Isolation**, and **Durability.**

- **Atomicity:** A transaction is a single unit of operation. You either execute it entirely or do not execute it at all. There cannot be partial execution.<br><br>
- **Consistency:** Once the transaction is executed, it should move from one consistent state to another.<br><br>
- **Isolation:** Transaction should be executed in isolation from other transactions (no Locks). During concurrent transaction execution, intermediate transaction results from simultaneously executed transactions should not be made available to each other. (Level 0,1,2,3)<br><br>
- **Durability:** · After successful completion of a transaction, the changes in the database should persist. Even in the case of system failures.<br><br>

# ACID Property in DBMS with example:

Below is an example of ACID property in DBMS:<br>
![Screenshot (262)](https://user-images.githubusercontent.com/67328331/196791468-d3871bd0-b566-4edf-ad72-5e397e6c6033.png)


Transaction 1 is transferring $50 from account X to account Y.<br>

Transaction 2 is crediting each account with a 10% interest payment.<br>

If both transactions are submitted together, there is no guarantee that the Transaction 1 will execute before Transaction 2 or vice versa. Irrespective of the order, the result must be as if the transactions take place serially one after the other.<br><br>

# Types of Transactions
**Based on Application areas :**
- Non-distributed vs. distributed
- Compensating transactions
- Transactions Timing
- On-line vs. batch

**Based on Actions :**

- Two-step
- Restricted
- Action model

**Based on Structure :**

- Flat or simple transactions: It consists of a sequence of primitive operations executed between a begin and end operations.
- Nested transactions: A transaction that contains other transactions.
- Workflow

<br><br>
# What is a Schedule?
A Schedule is a process creating a single group of the multiple parallel transactions and executing them one by one. It should preserve the order in which the instructions appear in each transaction. If two transactions are executed at the same time, the result of one transaction may affect the output of other.

**Example**<br><br>
![Screenshot (263)](https://user-images.githubusercontent.com/67328331/196791775-e03c2e2f-543a-4971-bb93-d59241bdd30b.png)

<br>
If Transaction 2 is executed before Transaction 1, outdated information about the product quantity will be read. Hence, schedules are required.

Parallel execution in a database is inevitable. But, Parallel execution is permitted when there is an equivalence relation amongst the simultaneously executing transactions. This equivalence is of 3 Types.<br><br>

# Result Equivalence:

If two schedules display the same result after execution, it is called result equivalent schedule. They may offer the same result for some value and different results for another set of values. For example, one transaction updates the product quantity, while other updates customer details.<br><br>

# View Equivalence

View Equivalence occurs when the transaction in both the schedule performs a similar action. Example, one transaction inserts product details in the product table, while another transaction inserts product details in the archive table. The transaction is the same, but the tables are different.<br><br>

# Conflict Equivalence

In this case, two transactions update/view the same set of data. There is a conflict amongst transaction as the order of execution will affect the output.<br><br>


# What is Serializability?
Serializability is the process of search for a concurrent schedule who output is equal to a serial schedule where transaction are execute one after the other. Depending on the type of schedules, there are two types of serializability:

- Conflict
- View
 <br><br>

# SUMMARY:
- Transaction management is a logical unit of processing in a DBMS which entails one or more database access operation
- It is a transaction is a program unit whose execution may or may not change the contents of a database.
- Not managing concurrent access may create issues like hardware failure and system crashes.
- Active, Partially Committed, Committed, Failed & Terminate are important transaction states.
- The full form of ACID Properties in DBMS is Atomicity, Consistency, Isolation, and Durability
- Three DBMS transactions types are Base on Application Areas, Action, & Structure.
- A Schedule is a process creating a single group of the multiple parallel transactions and executing them one by one.
- Serializability is the process of search for a concurrent schedule whose output is equal to a serial schedule where transactions are executed one after the other.
