#include<iostream>
using namespace std; 
bool isprinted(int arr[], int index,int value){             
    bool printed=false;
    for(int i=0 ; i<index ; i++){
        if(arr[i]==value){
            printed=true;
        }
    }
    return printed;
}
void intersection(int arr1[], int arr2[],int size1,int size2){
    int value;
    int index=0;
    int arr[100];
    for(int i=0 ; i<size1 ; i++){
        for(int j=0 ; j<size2 ; j++){
            if(arr1[i]==arr2[j]){
                value=arr1[i];
                if(!isprinted(arr,index,value)){
                    arr[index++]=arr1[i];
                }
                break;
            }
        }
    }
    for(int i=0 ; i<index ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr1[]={12,3,4,5,5,12,6,7,1};
    int arr2[]={5,2,3,5,12,7,3,1,4};
    int size1=sizeof(arr1)/sizeof(int);
    int size2=sizeof(arr2)/sizeof(int);
    intersection(arr1,arr2,size1,size2);
}

// Output: 12 3 4 5 7 1