#include <iostream>
#include <string>

using namespace std;
int binarySearch(int arr[] , int size,int high , int low , int target){
    if (low > high) {
        return -1; // Standard practice to return -1 when element is not found.
    }
    int mid;
     
    mid = (low + high) / 2;
    if(arr[mid] == target){
        
        return mid;
        
    }
    else if(arr[mid] < target){
        
        
        return binarySearch(arr, size ,high , mid + 1 ,target);

    }
    else{
        high = mid -1;
        
        return binarySearch(arr, size ,mid - 1 , low, target);
    }
    

}
using namespace std;

int main() {
    int arr[] = {3,7,9,33,56,78,89,90,100,120};
    
    // the array msut be sorted (in ascending order) for binary search
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    int result = binarySearch(arr, size,size -1 , 0 , target);
    cout<< "Element found at index: "<<result ;
    


    
    return 0;
}