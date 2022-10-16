# Process Synchronization in OS
  &nbsp;
Processes Synchronization or Synchronization is the way by which processes that share the same memory space are managed in an operating system. It helps maintain the consistency of data by using variables or hardware so that only one process can make changes to the shared memory at a time. There are various solutions for the same such as semaphores, mutex locks, synchronization hardware, etc.<br><br>

An operating system is a software that manages all applications on a device and basically helps in the smooth functioning of our computer. Because of this reason, the operating system has to perform many tasks, and sometimes simultaneously. This isn't usually a problem unless these simultaneously occurring processes use a common resource.

 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Example :**:&nbsp; consider a bank that stores the account balance of each customer in the same database. Now suppose you initially have x rupees in your account. Now, you take out some amount of money from your bank account, and at the same time, someone tries to look at the amount of money stored in your account. As you are taking out some money from your account, after the transaction, the total balance left will be lower than x. But, the transaction takes time, and hence the person reads x as your account balance which leads to inconsistent data. If in some way, we could make sure that only one process occurs at a time, we could ensure consistent data.
 
 ![Screenshot (243)](https://user-images.githubusercontent.com/67328331/196027669-60938e00-aabd-4488-9b66-ce74dbacf15f.png)

 In the above image, if Process1 and Process2 happen at the same time, user 2 will get the wrong account balance as Y because of Process1 being transacted when the balance is X.

Inconsistency of data can occur when various processes share a common resource in a system which is why there is a need for process synchronization in the operating system.

# How Process Synchronization in OS Works?

&nbsp;Let us take a look at why exactly we need Process Synchronization. For example, If a process1 is trying to read the data present in a memory location while another process2 is trying to change the data present at the same location, there is a high chance that the data read by the process1 will be incorrect.<br><br>
![Screenshot (244)](https://user-images.githubusercontent.com/67328331/196027725-297abf30-d3bf-46a9-8e45-d756a0b51988.png)

Let us look at different elements/sections of a program:

**Entry Section**: The entry Section decides the entry of a process.<br>
**Critical Section**: Critical section allows and makes sure that only one process is modifying the shared data.<br>
**Exit Section**: The entry of other processes in the shared data after the execution of one process is handled by the Exit section.<br>
**Remainder Section**: The remaining part of the code which is not categorized as above is contained in the Remainder section.<br>

# Race Condition

When more than one process is either running the same code or modifying the same memory or any shared data, there is a risk that the result or value of the shared data may be incorrect because all processes try to access and modify this shared resource. Thus, all the processes race to say that my result is correct. This condition is called the race condition. Since many processes use the same data, the results of the processes may depend on the order of their execution.

This is mostly a situation that can arise within the critical section. In the critical section, a race condition occurs when the end result of multiple thread executions varies depending on the sequence in which the threads execute.

But how to avoid this race condition? There is a simple solution:
by treating the critical section as a section that can be accessed by only a single process at a time. This kind of section is called an atomic section.

# What is the Critical Section Problem?
Why do we need to have a critical section? What problems occur if we remove it?
A part of code that can only be accessed by a single process at any moment is known as a critical section. This means that when a lot of programs want to access and change a single shared data, only one process will be allowed to change at any given moment. The other processes have to wait until the data is free to be used.

The wait() function mainly handles the entry to the critical section, while the signal() function handles the exit from the critical section. If we remove the critical section, we cannot guarantee the consistency of the end outcome after all the processes finish executing simultaneously.

We'll look at some solutions to Critical Section Problem but before we move on to that, let us take a look at what conditions are necessary for a solution to Critical Section Problem.

# Requirements of Synchronization

The following three requirements must be met by a solution to the critical section problem:

**Mutual exclusion**: If a process is running in the critical section, no other process should be allowed to run in that section at that time.<br>
**Progress**: If no process is still in the critical section and other processes are waiting outside the critical section to execute, then any one of the threads must be permitted to enter the critical section. The decision of which process will enter the critical section will be taken by only those processes that are not executing in the remaining section.<br>
**No starvation**: Starvation means a process keeps waiting forever to access the critical section but never gets a chance. No starvation is also known as Bounded Waiting.<br>
A process should not wait forever to enter inside the critical section.<br>
When a process submits a request to access its critical section, there should be a limit or bound, which is the number of other processes that are allowed to access the critical section before it.<br>
After this bound is reached, this process should be allowed to access the critical section.****

# Solutions To The Critical Section Problem

# **Peterson's solution**
Peterson's approach to critical section problems is extensively utilized. It is a classical software-based solution.

The solution is based on the idea that when a process is executing in a critical section, then the other process executes the rest of the code and vice-versa is also possible, i.e., this solution makes sure that only one process executes the critical section at any point in time.

In Peterson's solution, we have two shared variables that are used by the processes.

A boolean Flag[]: A boolean array Flag which is initialized to FALSE. This Flag array represents which process is which process wants to enter into the critical solution.
int Turn: A integer variable Turn indicates the process number which is ready to enter into the critical section.
![Screenshot (245)](https://user-images.githubusercontent.com/67328331/196027795-d54e0941-b6df-456e-ad50-c945b1735f66.png)


&nbsp;`do{
        //A process Pi wants to enter into the critical section
        //The ith index of flag is set
        Flag[i] = True;
        Turn = i;
        while(Flag[i] && Turn == i);
        
        { Critical Section };
        
        Flag[i] = False;
        // another process can go to Critical Section
        Turn = j;
        
            Remainder Section
            
    }  while ( True);
` <br>

Let us look at some disadvantages of Peterson's solution are:

1.The Peterson's solution involves Busy waiting<br>
2.The solution is also limited to only 2 processes.<br>

# Synchronization Hardware
Hardware can occasionally assist in the solving of critical section issues. Some operating systems provide a lock feature.

When a process enters a critical section, it is given a lock, which the process must release before the process can exit the critical section. As a result, additional processes are unable to access a critical section if anyone process is already using the section. The lock can have either of the two values, 0 or 1.

# Mutex Locks
Implementation of Synchronization hardware is not an easy method, which is why Mutex Locks were introduced.

Mutex is a locking mechanism used to synchronize access to a resource in the critical section. In this method, we use a LOCK over the critical section. The LOCK is set when a process enters from the entry section, and it gets unset when the process exits from the exit section.

# Semaphores
A semaphore is a signaling mechanism, and a process can signal a process that is waiting on a semaphore. This differs from a mutex in that the mutex can only be notified by the process that sets the shared lock. Semaphores make use of the wait() and signal() functions for synchronization among the processes.
There are two kinds of semaphores:

# Binary Semaphores
Binary Semaphores can only have one of two values: 0 or 1. Because of their capacity to ensure mutual exclusion, they are also known as mutex locks.

A single binary semaphore is shared between multiple processes.
When the semaphore is set to 1, it means some process is working on its critical section, and other processes need to wait, and if the semaphore is set to 0, that means any process can enter the critical section.

Hence, whenever the binary semaphore is set to 0, any process can then enter its critical section by setting the binary semaphore to 1. When it has completed its critical section, it can reset the binary semaphore to 0, enabling another process to enter it.

# Counting Semaphores
Counting Semaphores can have any value and are not limited to a certain area. They can be used to restrict access to a resource that has a concurrent access limit.

Initially, the counting semaphores are set to the maximum amount of processes that can access the resource at a time. Hence, the counting semaphore indicates that a process can access the resource if it has a value greater than 0. If it is set to 0, no other process can access the resource. Hence,
When a process wants to use that resource, it first checks to see if the value of the counting semaphore is more than zero.
If yes, the process can then proceed to access the resource, which involves reducing the value of the counting semaphore by one.
When the process completes its critical section code, it can increase the value of the counting semaphore, making way for some other process to access it.
The snippet code for semaphore would seem something like this: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;**Query**:&nbsp;&nbsp;`WAIT ( SE );<br>
while ( SE <= 0 );<br>
SE = SE - 1;<br>
SIGNAL ( SE );<br>
SE = SE + 1;
` <br>
We use the functions WAIT() and SIGNAL() to control the semaphore.




# Conclusion
Synchronization is the effort of executing processes such that no two processes have access to the same shared data.<br>
Four elements of program/data are:<br>
Entry section<br>
Critical section<br>
Exit section<br>
Reminder section<br><br>
The critical section is a portion of code that a single process can access at a specified moment in time.<br>
Three essential rules that any critical section solution must follow are as follows:<br>
Mutual Exclusion<br>
Progress<br>
No Starvation(Bounded waiting)<br>
Solutions to critical section problem are:<br>
Peterson's solution<br>
Synchronization hardware<br>
Mutex Locks<br>
Semaphore<br>
