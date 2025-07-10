#include<iostream>
#include<vector>
using namespace std;

//Time Complexity : O(logn)
//Space Complexity : O(1)
int binarySearch(vector<int> vect, int target,int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid = start + ((end-start)/2);           //Optimization to prevent overflow condition
        //int mid=(start+end)/2;
        if (vect[mid]<target){
            start=mid+1;
        }
        else if (vect[mid]>target){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> vect={2,3,5,6,7,8};
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int n=vect.size();
    int answer=binarySearch(vect,target,n);
    cout<<"Target found at index : "<<answer;
}


//Recursive Binary Search
//Time Complexity: O(logn)
//Space Complexity: O(logn)
// int binarySearch(vector<int> vect, int target, int start, int end){
//     int mid=start+((end-start)/2);
//     while(start<=end){
//         if (vect[mid]<target){
//             return binarySearch(vect, target,mid+1,end);
//         }
//         else if (vect[mid]>target){
//             return binarySearch(vect,target,start,mid-1);
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> vect={3,4,5,7,8,9,10};
//     int n=vect.size();
//     int target;
//     cout<<"Enter target: ";
//     cin>>target;
//     int answer=binarySearch(vect,target,0,n-1);
//     cout<<"Target found at index: "<<answer;
// }
