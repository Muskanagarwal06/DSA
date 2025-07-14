//Selection Sort
//Time Compplexity: O(n^2)

#include<iostream>
using namespace std;
void selectionSort(int arr[], int size){
    for (int i=0 ; i<size-1 ; i++){
        int minimumIdx=i;
        for (int j=i+1 ; j<size ; j++){
            if (arr[minimumIdx]>arr[j]){
                minimumIdx=j;
            }
        }
        swap(arr[minimumIdx],arr[i]);
    }
}
void printArray(int arr[], int size){
    for (int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={5,2,1,3,7,6,0};
    int size=sizeof(arr)/sizeof(int);
    selectionSort(arr,size);
    printArray(arr,size);
}