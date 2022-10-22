# THIS ARTICLE CONTAINS ABOUT INDEXING IN DATABASES, AND CONCEPT OF RAID


# Indexing in Databases

Indexing is a way to optimize the performance of a database by minimizing the number of disk accesses required when a query is processed. It is a data structure technique which is used to quickly locate and access the data in a database. 

Indexes are created using a few database columns. 

* The first column is the Search key that contains a copy of the primary key or candidate key of the table. These values are stored in sorted order so that the corresponding data can be accessed quickly. 

Note: The data may or may not be stored in sorted order.

* The second column is the Data Reference or Pointer which contains a set of pointers holding the address of the disk block where that particular key value can be found.

## Types of Indexes : 

### Dense Index : 

* For every search key value in the data file, there is an index record.

* This record contains the search key and also a reference to the first data record with that search key value.

### Sparse Index : 

* The index record appears only for a few items in the data file. Each item points to a block as shown.

* To locate a record, we find the index record with the largest search key value less than or equal to the search key value we are looking for.

* We start at that record pointed to by the index record, and proceed along with the pointers in the file (that is, sequentially) until we find the desired record.

## Methods of Indexing : 

* Clustered Indexing

* Non-Clustered or Secondary Indexing

* Multilevel Indexing

### Clustered Indexing : 

When more than two records are stored in the same file these types of storing known as cluster indexing. By using the cluster indexing we can reduce the cost of searching reason being multiple records related to the same thing are stored at one place and it also gives the frequent joining of more than two tables (records). 

Clustering index is defined on an ordered data file. The data file is ordered on a non-key field. In some cases, the index is created on non-primary key columns which may not be unique for each record. In such cases, in order to identify the records faster, we will group two or more columns together to get the unique values and create index out of them. This method is known as the clustering index. Basically, records with similar characteristics are grouped together and indexes are created for these groups. 

### Secondary Indexing : 

A non clustered index just tells us where the data lies, i.e. it gives us a list of virtual pointers or references to the location where the data is actually stored. Data is not physically stored in the order of the index. Instead, data is present in leaf nodes. For eg. the contents page of a book. Each entry gives us the page number or location of the information stored. The actual data here(information on each page of the book) is not organized but we have an ordered reference(contents page) to where the data points actually lie. We can have only dense ordering in the non-clustered index as sparse ordering is not possible because data is not physically organized accordingly. 

### Multilevel Indexing : 

With the growth of the size of the database, indices also grow. As the index is stored in the main memory, a single-level index might become too large a size to store with multiple disk accesses. The multilevel indexing segregates the main block into various smaller blocks so that the same can stored in a single block. The outer blocks are divided into inner blocks which in turn are pointed to the data blocks. This can be easily stored in the main memory with fewer overheads. 

# B+ Tree

* The B+ tree is a balanced binary search tree. It follows a multi-level index format.

* B+ trees are used for indexing in DBMS.

* In the B+ tree, leaf nodes denote actual data pointers. B+ tree ensures that all leaf nodes remain at the same height.

* In the B+ tree, the leaf nodes are linked using a link list. Therefore, a B+ tree can support random access as well as sequential access.

## Structure of B+ Tree

* In the B+ tree, every leaf node is at equal distance from the root node. The B+ tree is of the order n where n is fixed for every B+ tree.

* It contains an internal node and leaf node.

### Internal Nodes : 

* An internal node of the B+ tree can contain at least n/2 record pointers except the root node.

* At most, an internal node of the tree contains n pointers.

### Leaf Nodes : 

* The leaf node of the B+ tree can contain at least n/2 record pointers and n/2 key values.

* At most, a leaf node contains n record pointer and n key values.

* Every leaf node of the B+ tree contains one block pointer P to point to next leaf node.

* Hence, it is easy to access the data associated with each leaf nodes.

                ***************************************************************************************************
                ***************************************************************************************************


# Redundant Arrays of Independent Disks (RAID)

RAID, or “Redundant Arrays of Independent Disks” is a technique which makes use of a combination of multiple disks instead of using a single disk for increased performance, data redundancy or both. It is a very important concept in DBMS.

## Why Data Redundancy?

Data redundancy, although taking up extra space, adds to disk reliability. This means, in case of disk failure, if the same data is also backed up onto another disk, we can retrieve the data and go on with the operation. On the other hand, if the data is spread across just multiple disks without the RAID technique, the loss of a single disk can affect the entire data. 

## Considerations for a RAID System:

* Reliability : How many disk faults can the system tolerate? 

* Availability : What fraction of the total session time is a system in uptime mode, i.e. how available is the system for actual use? 

* Performance : How good is the response time? How high is the throughput (rate of processing work)? Note that performance contains a lot of parameters and not just the two. 

* Capacity : Given a set of N disks each with B blocks, how much useful capacity is available to the user? 

RAID is very transparent to the underlying system. This means, to the host system, it appears as a single big disk presenting itself as a linear array of blocks. This allows older technologies to be replaced by RAID without making too many changes in the existing code. 

## Different RAID levels:

### RAID 0 (Stripping) : 

* Blocks are “stripped” across disks, i.e., the data is stripped into different parts and stored in different disks.

* Instead of placing just one block into a disk at a time, we can work with two (or more) blocks placed into a disk before moving on to the next one. 

### RAID 1 (Mirroring) : 

* More than one copy of each block is stored in a separate disk. Thus, every block has two (or more) copies, lying on different disks. 

* RAID 0 was unable to tolerate any disk failure. But RAID 1 is capable of reliability. 

### RAID 4 (Block-Level Stripping with dedicated Parity) : 

* The data is stripped and stored in different disks along with a parity bit to check for data loss.

* Parity bit is generated in such a way that if any part of the data is lost, then it can be checked using parity bit.

### RAID 5 (Block-Level Stripping with Distributed Parity) : 

* This is a slight modification of the RAID 4 system where the only difference is that the parity rotates among the drives. 

* This was introduced to make the random write performance better. 

### RAID 6 :

* It is a recent advancement that contains a distributed double parity, which involves block-level stripping with 2 parity bits instead of just 1 distributed across all the disks. There are also hybrid RAIDs, which make use of more than one RAID levels nested one after the other, to fulfill specific requirements. 

#### Note : 

RAID-2 consists of bit-level stripping using a Hamming Code parity. RAID-3 consists of byte-level striping with dedicated parity. These two are less commonly used. 
