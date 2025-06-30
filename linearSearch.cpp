/** Linear Search Time Complexity 
 * Best Case: O(1)
 * Worst Case: O(n) **/


#include<iostream>
using namespace std;
int main(){
    int arr[8];
    int size= sizeof(arr)/sizeof(int);
    cout<<"Enter array elements: ";
    for (int i=0 ; i<size ; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target element: ";
    cin>>target;
    bool found=false;
    for (int i=0 ; i<size ; i++){
        if (arr[i]==target){
            found=true;
            cout<<"Element found at index : "<<i;
            break;
        }
    }
    if (found==false){
        cout<<-1;
    }
}