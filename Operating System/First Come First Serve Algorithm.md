# Scheduling Algorithm

There are various algorithms which are used by the Operating System to schedule the processes on the processor in an efficient way.

# The Purpose of a Scheduling algorithm

- Maximum CPU utilization
- Fare allocation of CPU
- Maximum throughput
- Minimum turnaround time
- Minimum waiting time
- Minimum response time

Here we will talk about First Come First Serve Scheduling Algorithm with different arrival time.

# First Come First Serve Algorithm

Given n processes with their burst times, the task is to find average waiting time and
average turn around time using FCFS scheduling algorithm.
First in, first out (FIFO), also known as first come, first served (FCFS), is the simplest scheduling
algorithm. FIFO simply queues processes in the order that they arrive in the ready queue.
In this, the process that comes first will be executed first and next process starts only
after the previous gets fully executed.

# Implementation

- Input the processes along with their burst time(bt)
  and arrival time(at)
- Find waiting time for all other processes i.e. for
  a given process i:
  wt[i] = (bt[0] + bt[1] +...... bt[i-1]) - at[i]
- Now find turn around time
  = waiting_time + burst_time for all processes
- Average waiting time =
  total_waiting_time / no_of_processes
- Average turn around time =
  total_turn_around_time / no_of_processes

# Characteristics

- FCFS supports non-preemptive and preemptive CPU scheduling algorithm.
- Tasks are always executed on a First-come, First-serve concept.
- FCFS is easy to implement and use.
- This algorithm is not much efficient in performance, and the wait time is quite high.

# Implementation in cpp

```cpp
#include<bits/stdc++.h>
using namespace std;

void findWaitingTime(int processes[], int n, int bt[],
                                   int wt[], int at[])
{
    int service_time[n];
    service_time[0] = at[0];
    wt[0] = 0;

    for (int i = 1; i < n ; i++)
    {
        service_time[i] = service_time[i-1] + bt[i-1];
        wt[i] = service_time[i] - at[i];

        if (wt[i] < 0)
            wt[i] = 0;
    }
}

void findTurnAroundTime(int processes[], int n, int bt[],
                                      int wt[], int tat[])
{
    for (int i = 0; i < n ; i++)
        tat[i] = bt[i] + wt[i];
}

void findavgTime(int processes[], int n, int bt[], int at[])
{
    int wt[n], tat[n];

    findWaitingTime(processes, n, bt, wt, at);
    findTurnAroundTime(processes, n, bt, wt, tat);

    cout << "Processes " << " Burst Time " << " Arrival Time "
         << " Waiting Time " << " Turn-Around Time "
         << " Completion Time \n";
    int total_wt = 0, total_tat = 0;

    for (int i = 0 ; i < n ; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        int compl_time = tat[i] + at[i];
        cout << " " << i+1 << "\t\t" << bt[i] << "\t\t"<< at[i] << "\t\t" << wt[i] << "\t\t "
        << tat[i]  <<  "\t\t " << compl_time << endl;
    }

    cout << "Average waiting time = "<< (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "<< (float)total_tat / (float)n;
}

int main()
{
    // Process id's
    int processes[] = {1, 2, 3};
    int n = sizeof processes / sizeof processes[0];

    // Burst time of all processes
    int burst_time[] = {5, 9, 6};

    // Arrival time of all processes
    int arrival_time[] = {0, 3, 6};

    findavgTime(processes, n, burst_time, arrival_time);

    return 0;
}
```
