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

void SelectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
  
    for (i = 0; i < n-1; i++)
    {
       
        
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
      
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}

int main(){
    int arr[]={346,8,43,19,78,1,9};

    int sz=sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,sz);
}