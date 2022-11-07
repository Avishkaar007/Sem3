#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Process
{
    int pid;
    int burstTime;
    int priority;
    

};
bool compare(Process a, Process b){
    return a.priority>b.priority;
}
void waitingTime(Process p[],int wt[],int n)
{
    wt[0]=0;
    for (int i = 1; i < n; i++)
    {
       wt[i]=p[i-1].burstTime + wt[i-1];
    }
    
}
void turnAround(Process p[],int wt[],int tat[],int n)
{
    for (int i=0;i<n;i++){
        tat[i]=p[i].burstTime+wt[i];
    }
}
void avgTime(Process p[],int n)
{
    int wt[n],tat[n],total_wt,total_tat=0;
    waitingTime(p,wt,n);
    turnAround(p,wt,tat,n);
    cout<<"Process | Burst Time | Waiting Time | TurnAround Time "<<endl;
    for (int i=0;i<n;i++)
    {
        total_wt=total_wt+wt[i];
        total_tat+=tat[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"     "<<p->pid<<"        "<<p->burstTime<<"            "<<wt[i]<<"            "<<tat[i]<<endl;
    }
    
}

void scheduler(Process p[], int n){
    sort(p,p+n,compare);
    avgTime(p,n);
}


int main(){

    int burstTime[]={3,5,7};
    int arrivalTime[]={0,1,2};
    int priority[]={1,2,3};
    Process p[]={{1,2,3},{4,5,6}};
    scheduler(p,3);

}