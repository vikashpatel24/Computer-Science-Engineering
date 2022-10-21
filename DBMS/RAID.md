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