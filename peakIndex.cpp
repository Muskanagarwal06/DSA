#include<iostream>
#include<vector>
using namespace std;

//Time Complexity: O(logn)
int binarySearch(vector<int> vect,int n){
    int start=1;
    int end=n-2;
    while(start<=end){
        int mid=start + (end-start)/2;
        if  (vect[mid-1]<vect[mid] && vect[mid]>vect[mid+1]){
            return mid;
        }else if (vect[mid-1]<vect[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> vect={3,4,5,6,7,9,10,4,3,2};            //Peak Index Mountain Array
    int n=vect.size();
    int answer=binarySearch(vect,n);
    cout<<"Peak Index:" <<answer;
}
