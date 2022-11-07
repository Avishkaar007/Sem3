#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//by Avishkaar Pawar 

// Priority NonPremptive

int cnt;
class Process{
    public :
        int time;
        int priority;
        string processName;
        
        Process(){
            priority=0;
            time=0;
        }
       
        Process(int time, int priority,int cnt){
            this->priority=priority;
            this->time=time;
            processName='P'+to_string(++cnt);
        }

        // Process(string name,int priority){
        //     this->priority=priority;
        //     processName=name;
        //     count++;
        // }
     

        void setTime(int time){
            this->time=time;
        }

        int getTime(){
            return this->time;
        }
        void setProcessName(string Name){
            processName=Name;
        }
        int getPriority(){
            return priority;
        }
        Process getProcess(){
            return *this;
        }


};



class Scheduler{
    
    public:
    int sz;
    Process processArr[20]={};
    int priorityArr[20]={};
    Scheduler(){
        sz=0;
    };
    Scheduler(int sz){
        this->sz=sz;
    }

    void Sort(){
        for( int i=0;i<sz;i++){
            for(int j=0;j<sz;j++){
                if(priorityArr[j]>priorityArr[j+1]){
                    swap(priorityArr[j],priorityArr[j+1]);
                    swap(processArr[j],processArr[j+1]);
                }
            }
        }
        reverse(priorityArr,priorityArr+sz);
        reverse(processArr,processArr+sz);
                
    }
    
    void print(){
        Sort();
        cout<<"-----------------------------------------"<<endl;
        cout<<"| Process | Priority | BT | TurnAroundTime |"<<endl;
        cout<<"-----------------------------------------"<<endl;
        int done=0;
        
        while (done<sz){
        cout<<"    "<<(processArr[done]).processName<<"         "<<(processArr[done]).priority<<"            "<<(processArr[done]).time;
        cout<<"      "<<endl;
        done++;
        }
        cout<<"-----------------------------------------"<<endl;
        
        
    }


};

int main(){
    ::cnt=0;
    int sz;
    cout<<endl<<"Enter No of processes : ";
    cin>>sz;
    int done=0;
    Scheduler * scd=new Scheduler(sz);
    while (done<sz){
        int time,priority;
        cout<<"Enter Burst Time for process "<<done+1<<" : ";
        cin>>time;
        cout<<"Enter Priority : ";
        cin>>priority;
        cout<<endl;
        Process* obj=new Process(time,priority,::cnt);
        scd->processArr[done]=obj->getProcess();
        scd->priorityArr[done]=obj->getTime();
        done++;
        ::cnt++;
        
    }
    
    scd->print();
}