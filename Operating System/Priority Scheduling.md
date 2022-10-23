# Scheduling Algorithm

There are various algorithms which are used by the Operating System to schedule the processes on the processor in an efficient way.

# The Purpose of a Scheduling algorithm

- Maximum CPU utilization
- Fare allocation of CPU
- Maximum throughput
- Minimum turnaround time
- Minimum waiting time
- Minimum response time

Here we will talk about Priority Scheduling Algorithm with different arrival time.

# Priority Scheduling

Priority scheduling is a non-preemptive algorithm and one of the most common scheduling algorithms
in batch systems. Each process is assigned first arrival time (less arrival time process first)
if two processes have same arrival time, then compare to priorities (highest process first).
Also, if two processes have same priority then compare to process number (less process number first).
This process is repeated while all process get executed.

![Alt text](https://media.geeksforgeeks.org/wp-content/uploads/opSystemScheduling.png)

# Algorithm

- First input the processes with their arrival time, burst time and priority.
- First process will schedule, which have the lowest arrival time, if two or more
  processes will have lowest arrival time, then whoever has higher priority will schedule first.
- Now further processes will be schedule according to the arrival time and priority of the process.
  (Here we are assuming that lower the priority number having higher priority).
  If two process priority are same then sort according to process number.
- Once all the processes have been arrived, we can schedule them based on their priority.

# Implementation in C++

```cpp
#include <bits/stdc++.h>

using namespace std;

#define totalprocess 5

// Making a struct to hold the given input
struct process
{
int at,bt,pr,pno;
};

process proc[50];

/*
Writing comparator function to sort according to priority if
arrival time is same
*/

bool comp(process a,process b)
{
if(a.at == b.at)
{
return a.pr<b.pr;
}
else
{
	return a.at<b.at;
}
}

void get_wt_time(int wt[])
{
// declaring service array that stores cumulative burst time
int service[50];

service[0] = proc[0].at;
wt[0]=0;
for(int i=1;i<totalprocess;i++)
{
service[i]=proc[i-1].bt+service[i-1];

wt[i]=service[i]-proc[i].at;
	if(wt[i]<0)
	{
	wt[i]=0;
	}
}
}

void get_tat_time(int tat[],int wt[])
{
for(int i=0;i<totalprocess;i++)
{
	tat[i]=proc[i].bt+wt[i];
}

}

void findgc()
{
    //Declare waiting time and turnaround time array
    int wt[50],tat[50];
    double wavg=0,tavg=0;
    get_wt_time(wt);
    get_tat_time(tat,wt);

    int stime[50],ctime[50];
    stime[0] = proc[0].at;
    ctime[0]=stime[0]+tat[0];

    for(int i=1;i<totalprocess;i++)
	{
		stime[i]=ctime[i-1];
		ctime[i]=stime[i]+tat[i]-wt[i];
	}

    cout<<"Process_no\tStart_time\tComplete_time\tTurn_Around_Time\tWaiting_Time"<<endl;

    for(int i=0;i<totalprocess;i++)
	{
		wavg += wt[i];
		tavg += tat[i];

		cout<<proc[i].pno<<"\t\t"<<
		stime[i]<<"\t\t"<<ctime[i]<<"\t\t"<<
		tat[i]<<"\t\t\t"<<wt[i]<<endl;
	}

	cout<<"Average waiting time is : ";
	cout<<wavg/(float)totalprocess<<endl;
	cout<<"average turnaround time : ";
	cout<<tavg/(float)totalprocess<<endl;

}

int main()
{
    int arrivaltime[] = { 1, 2, 3, 4, 5 };
    int bursttime[] = { 3, 5, 1, 7, 4 };
    int priority[] = { 3, 4, 1, 7, 8 };

    for(int i=0;i<totalprocess;i++)
    {
        proc[i].at=arrivaltime[i];
        proc[i].bt=bursttime[i];
        proc[i].pr=priority[i];
        proc[i].pno=i+1;
    }

        sort(proc,proc+totalprocess,comp);
        //Calling function findgc for finding Gantt Chart
        findgc();
        return 0;
}

```
