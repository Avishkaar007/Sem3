#include <iostream>
using namespace std;

template <class D>
void printArray(D arr[],int sz){
    cout<<"[";
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<",";
    }
    cout<<"]"<<endl;
}
template <class D>
void InsertionSort(D arr[], int sz){
    for( int i=1;i<sz;i++){
        D key=arr[i];
        int j=i-1;
        while (arr[j]>=key && j>-1){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
        printArray(arr,sz);
    }
    
}

int main(){
    int arr[]={346,8,43,19,78,1,9};
    int sz=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,sz);
}