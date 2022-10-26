What is a Normalization?
-------------------
Database normalization is the process of organizing the attributes of the database to reduce or eliminate data redundancy (having the same data but at different places) .
Normalization divides the larger table into smaller and links them using relationships.

Why do we need Normalization?
-------------------
Data redundancy unnecessarily increases the size of the database as the same data is repeated in many places. Inconsistency problems also arise during insert, delete and update operations. 
So to remove these anomalies we need Normalize the relations (tables).

Types of Normal Forms
-------------------
Normalization works through a series of stages called Normal forms. The normal forms apply to individual relations. The relation is said to be in particular normal form if it satisfies constraints.

![image](https://user-images.githubusercontent.com/99464268/195410157-f1b5b784-4de4-4f8d-ac50-1b14c308c73a.png)

First Normal Form or 1NF
-------------------
A relation is in first normal form only if the relational table doesn’t contain any multivalued attribute but contains only single-valued attributes.

Second Normal Form or 2NF
-------------------
A relation is in second normal form if:

* It is in first normal form or 1NF
* It doesn’t contain any partial dependencies. (It shouldn’t have any non-prime attribute which is functionally dependent on any proper subset of the candidate key of the relation.).

Third Normal Form or 3NF
-------------------
Let R be the relational schema, X->Y any non-trivial functional dependency over R is in 3NF if:

* R should be in 2NF
* X should be candidate key or superkey, or
* Y should be prime attribute
(So basically the relation which is in 2NF already if it doesn’t contain any transitive dependencies then it will be in 3NF.)

Boyce Codd Normal Form or BCNF
-------------------
Let R be a relational schema ,\
X->Y be any non-trivial functional dependency over the R is BCNF if X is a Candidate Key or a SuperKey.\
OR \
X->Y is a trivial functional dependency (i.e, Y subset of X)\
Thus BCNF has no redundancy from any functional dependency and is a slightly stronger version of the 3NF.

Fourth normal form or 4NF
-------------------
4NF is nothing but the next level of BCNF. While the 2NF, 3NF, and BCNF are concerned with functional dependencies, 4NF is concerned with multivalued dependency.

Let R be the relational schema F be the single and multivalued dependency X->->Y is in 4NF if:

X is a candidate key or a super key of the relation.\
OR\
X union Y = R.

Fifth normal form or 5NF
-------------------

5NF is also known as Project-Join Normal Form or PJ/NF. 5NF is designed to reduce the redundancy in relational databases. To avoid redundancy all the tables are broken into as many tables as possible in 5NF. A table is in 5NF when every non-trivial join dependency is implied by the candidate key of that relation. (should not contain any join dependency and join should be lossless.).

Advantages Normalization
-------------------
* Normalization helps to minimize data redundancy.
* Greater overall database organization.
* Data consistency within the database.
* Much more flexible database design.
* Enforces the concept of relational integrity.
* Better and quicker execution.

Disadvantages of Normalization
-------------------
* You cannot start building the database before knowing what the user needs.
* The performance degrades when normalizing the relations to higher normal forms, i.e., 4NF, 5NF.
* It is very time-consuming and difficult to normalize relations of a higher degree.
* Careless decomposition may lead to a bad database design, leading to serious problems.
