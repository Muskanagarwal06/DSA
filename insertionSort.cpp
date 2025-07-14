// Insertion Sort
// Time Complexity: O(n^2)

#include<iostream>
using namespace std;
void insertionSort(int arr[] ,int size){
    for(int i=1 ; i<size ; i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){           //for descending order:  arr[prev]<curr
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
void printArray(int arr[], int size){
    for (int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,4,3,7,6,0};
    int size=sizeof(arr)/sizeof(int);
    insertionSort(arr,size);
    printArray(arr,size);
}