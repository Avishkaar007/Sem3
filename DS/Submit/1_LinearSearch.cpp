#include <iostream>
using namespace std;

template <class D>
int linSearch(D list[],D toSearch,int sz){
    for (int i=0;i<sz;i++){
        if (list[i]==toSearch){
            return i;
        }
    }
    
    return -1;
}
int main(){
    int list[]={34,56,35,24,76,5,3};
    int toSearch;
    cout<<"Enter element to be searched : ";
    cin>>toSearch;
    int sz=sizeof(list)/sizeof(list[0]);
    cout<<"Element Found at index "<<linSearch(list,toSearch,sz)<<endl;
}