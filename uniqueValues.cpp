#include<iostream>
using namespace std;
void isUnique(int arr[], int size){
    for(int  i=0 ; i<size ; i++){
        bool unique=true;
        for(int j=0 ; j<size ; j++){
            if(arr[i]==arr[j] && i!=j){
                unique=false;
                break;
            }
        }
        if (unique==true){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[]={1,2,3,2,3,56,8,-4,7,4};
    int size= sizeof(arr)/sizeof(int);
    isUnique(arr,size);
}