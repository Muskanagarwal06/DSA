#include<iostream>
#include<vector>
using namespace std;

//Time Complexity : O(logn)
int binarySearch(vector<int> vect, int target, int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start + (end-start)/2;
        if (vect[mid]==target){
            return mid;
        }
        if (vect[start]<=vect[mid]){             //left sorted
            if (vect[start]<=target && target<=vect[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        else{                                    //right sorted
            if (vect[mid]<=target && target<=vect[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> vect={3,4,5,6,7,0,1,2};      //Rotated sorted array
    int n=vect.size();
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int answer=binarySearch(vect, target, n);
    cout<<"Target found at index: "<<answer;
}