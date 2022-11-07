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

void BubbleSort(D arr[], int sz){
    for( int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            printArray(arr,sz);
        }
        cout<<endl;
    }
    
}

int main(){
    int arr[]={346,8,43,19,78,1,9};

    int sz=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,sz);
}