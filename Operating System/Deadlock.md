# Deadlock in Operating System
  &nbsp;
A deadlock in OS is a situation in which more than one process is blocked because it is holding a resource and also requires some resource that is acquired by some other process. The four necessary conditions for a deadlock situation to occur are mutual exclusion, hold and wait, no preemption and circular set. We can prevent a deadlock by preventing any one of these conditions. There are different ways to detect and recover a system from deadlock.<br><br>
 
# What is Deadlock in OS?
All the processes in a system require some resources such as central processing unit(CPU), file storage, input/output devices, etc to execute it. Once the execution is finished, the process releases the resource it was holding. However, when many processes run on a system they also compete for these resources they require for execution. This may arise a deadlock situation.

A deadlock is a situation in which more than one process is blocked because it is holding a resource and also requires some resource that is acquired by some other process. Therefore, none of the processes gets executed.

# Neccessary Conditions for Deadlock
- **Mutual Exclusion:** Only one process can use a resource at any given time i.e. the resources are non-sharable.<br><br>
- **Hold and wait:** A process is holding at least one resource at a time and is waiting to acquire other resources held by some other process.<br><br>
- **No preemption:** The resource can be released by a process voluntarily i.e. after execution of the process.<br><br>
- **Circular Wait:**  A set of processes are waiting for each other in a circular fashion. For example, lets say there are a set of processes { P0, P1, P2, P3 } such that P0 depends P1, P1 depends P2, P2 depends on P3 and P3 depends on P0. This creates a circular relation between all these processes and they have to wait forever to be executed.<br><br>
  &nbsp;
 **Example :**<br><br>
 ![Screenshot (251)](https://user-images.githubusercontent.com/67328331/196383516-84d04dc8-5058-46b4-96f6-51b2d57d26c6.png)

   &nbsp;
 In the above figure, there are two processes and two resources. Process 1 holds "Resource 1" and needs "Resource 2" while Process 2 holds "Resource 2" and requires "Resource 1". This creates a situation of deadlock because none of the two processes can be executed. Since the resources are non-shareable they can only be used by one process at a time(Mutual Exclusion). Each process is holding a resource and waiting for the other process the release the resource it requires. None of the two processes releases their resources before their execution and this creates a circular wait. Therefore, all four conditions are satisfied.<br><br>
 
 # Methods of Handling Deadlocks in Operating System
 The first two methods are used to ensure the system never enters a deadlock.
 
 - **Deadlock Prevention**
 This is done by restraining the ways a request can be made. Since deadlock occurs when all the above four conditions are met, we try to prevent any one of them, thus preventing a deadlock.

- **Deadlock Avoidance**
When a process requests a resource, the deadlock avoidance algorithm examines the resource-allocation state. If allocating that resource sends the system into an unsafe state, the request is got granted.

Therefore, it requires additional information such as how many resources of each type is required by a process. If the system enters into an unsafe state, it has to take a step back to avoid deadlock.

- **Deadlock Detection and Recovery**
We let the system fall into a deadlock and if it happens, we detect it using a detection algorithm and try to recover.

 **Some ways of recovery are as follows.**

1. Aborting all the deadlocked processes.
2. Abort one process at a time until the system recovers from the deadlock.
3. Resource Preemption: Resources are taken one by one from a process and assigned to higher priority processes until the deadlock is resolved.<br><br>

- **Deadlock Ignorance**<br>
In the method, the system assumes that deadlock never occurs. Since the problem of deadlock situation is not frequent, some systems simply ignore it. Operating systems such as UNIX and Windows follow this approach. However, if a deadlock occurs we can reboot our system and the deadlock is resolved automatically.

**Note:** The above approach is an example of Ostrich Algorithm. It is a strategy of ignoring potential problems on the basis that they are extremely rare.

# Difference between Starvation and Deadlocks:
![Screenshot (252)](https://user-images.githubusercontent.com/67328331/196383905-3dcc4dd2-a54f-4dc7-ae00-6255935c5896.png)



# Advantage of Deadlock Method
- No preemption is needed for deadlocks.
- It is a good method if the state of the resource can be saved and restored easily.
- It is good for activities that perform a single burst of activity.
- It does not need run-time computations because the problem is solved in system design.

# Disadvantages of Deadlock Method
- The processes must know the maximum resource of each type required to execute it.
- Preemptions are frequently encountered.
- It delays the process initiation.
- There are inherent pre-emption losses.
- It does not support incremental request of resources.

# Conclusion
- A deadlock in OS is a situation in which more than one process is blocked because it is holding a resource and also requires some resource that is acquired by some other process.
- The four necessary conditions for a deadlock situation are mutual exclusion, no preemption, hold and wait and circular set.
- There are four methods of handling deadlocks - deadlock avoidance, deadlock prevention, deadline detection and recovery and deadlock ignorance.
- We can prevent a deadlock by preventing any one of the four necessary conditions for a deadlock.
- There are different ways of detecting and recovering a deadlock in a system.
- A starvation is a situation in which lower priority processes are postponed indefinitely while higher priority processes are executed.
- The advantages of deadlock handling methods are that no preemption is needed and it is good for activities that require a single burst of activity.
- The disadvantages of deadlock handling methods are it delays process initiation and preemptions are frequently encountered in it.
