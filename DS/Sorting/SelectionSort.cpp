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

void SelectionSort(D arr[], int sz){
    int key=0
    D  mx= INT32_MAX;
    
    for( int i=0;i<sz;i++){
        for(int j=key;j<sz;j++){
            if (arr[i]< mx ){
                mx=arr[i];
            }
            printArray(arr,sz);
        
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={346,8,43,19,78,1,9};

    int sz=sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,sz);
}