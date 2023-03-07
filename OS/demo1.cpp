#include <iostream>
#include <bits/stdc++.h>    
using namespace std;

class process{

public:
    int bt;
    int at;
    int pno;

};

int main(){
    process p[3]={{5,5,1},{3,3,2},{1,1,3}};
    int bt[4]={4,7,6,3};
    int at[4]={0,2,4,5};
    int current=0;
    sort(p,p+3);
    cout<<p[0].at<<" "<<p[1].bt;


    

}