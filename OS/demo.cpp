#include<iostream>
#include <unistd.h>
using namespace std;
int main(){
    // fork();
    int x =10;
    fork();
    cout<<x<<"Hello "<<getpid()<<endl;    
    x++;
    fork();
}