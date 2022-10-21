# Scheduling Algorithm

There are various algorithms which are used by the Operating System to schedule the processes on the processor in an efficient way.

# The Purpose of a Scheduling algorithm

- Maximum CPU utilization
- Fare allocation of CPU
- Maximum throughput
- Minimum turnaround time
- Minimum waiting time
- Minimum response time

Here we will talk about Shortest Job First Scheduling Algorithm.

# Round Robin Scheduling Algorithm

Round Robin is a CPU scheduling algorithm where each process is assigned a fixed time slot in a cyclic way.

- Round Robin CPU Algorithm generally focuses on Time Sharing technique.
- The period of time for which a process or job is allowed to run in a pre-emptive method is called time quantum.
- Each process or job present in the ready queue is assigned the CPU for that time quantum,
  if the execution of the process is completed during that time then the process will end
  else the process will go back to the waiting table and wait for its next turn to complete the execution.

![Alt text](https://www.gatevidyalay.com/wp-content/uploads/2018/10/Round-Robin-Scheduling.png)

# Basic Characteristics

In Round Robin Scheduling,

- CPU is assigned to the process on the basis of FCFS for a fixed amount of time.
- This fixed amount of time is called as time quantum or time slice.
- After the time quantum expires, the running process is preempted and sent to the ready queue.
- Then, the processor is assigned to the next arrived process.
- It is always preemptive in nature.

# Algorithm

- Create an array rem_bt[] to keep track of remaining burst time of processes.
  This array is initially a copy of bt[] (burst times array)
- Create another array wt[] to store waiting times of processes. Initialize this array as 0.
- Initialize time : t = 0
- Keep traversing all the processes while they are not done. Do following for i’th process if it is not done yet.
- If rem_bt[i] > quantum
- t = t + quantum
- rem_bt[i] -= quantum;
- Else // Last cycle for this process
- t = t + rem_bt[i];
- wt[i] = t – bt[i]
- rem_bt[i] = 0; // This process is over

# Implementation in C++

```cpp
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    int n;
    cout << "Enter the number of processes ";
    cin >> n;
    int flag, count, time, arrivalTime[n], burstTime[n], remainingTime[n], wait_time = 0, turn_around_time = 0, time_quantum;
    int remain = n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the arrival and burst time for process " << i + 1 << ":";
        cin >> arrivalTime[i] >> burstTime[i];
        remainingTime[i] = burstTime[i];
    }
    cout << "Enter time quantum ";
    cin >> time_quantum;
    cout << "\nProcess\t"
         << "|TAT\t"
         << "|Waitng Time\n";
    for (time = 0, count = 0; remain != 0;)
    {
        if (remainingTime[count] <= time_quantum && remainingTime[count] > 0)
        {
            time += remainingTime[count];
            remainingTime[count] = 0;
            flag = 1;
        }
        else if (remainingTime[count] > time_quantum && remainingTime[count] > 0)
        {
            remainingTime[count] -= time_quantum;
            time += time_quantum;
        }
        if (flag == 1)
        {
            remain--;
            cout << "P[" << count + 1 << "]\t"
                 << "|" << time - arrivalTime[count] << "\t|" << time - arrivalTime[count] - burstTime[count] << "\n";
            wait_time += time - arrivalTime[count];
            turn_around_time += time - arrivalTime[count] - burstTime[count];
            flag = 0;
        }
        if (count == n - 1)
            count = 0;
        else if (arrivalTime[count + 1] <= time)
            count++;
        else
            count = 0;
    }
    cout << "Average waitng time is :" << wait_time * 1.0 / n << "\n";
    cout << "Average turnaround time :" << turn_around_time * 1.0 / n;
    return 0;
}
```
