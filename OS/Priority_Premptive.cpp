#include <iostream>
using namespace std;
//0 represents highest priority 
class Process
{
    
    int b_time;
    int r_time;
    int priority;
    int arrival_time;

    public:
    Process(){
        cout<<"Enter Burst Time : " ;
        cin>>b_time;
        cout<<"Enter priority : ";
        cin>>priority;
        cout<<"Enter Arrival Time : ";
        cin>>b_time;
        r_time=b_time;

    }
    


};
class ProcessList
{   
    int p_count;
    public:
    Process * pList[10];
    ProcessList(int p_count)
    {
        this->p_count=p_count;
    }
};
int main(){
    cout<<"Enter no of processes : ";
    int p_count;
    cin>>p_count;
    ProcessList *pl = new ProcessList(p_count);
    for (int a;a<p_count;a++){
        Process * p=new Process();
        pl->pList[p_count]=p;
    }
    cout<<
}