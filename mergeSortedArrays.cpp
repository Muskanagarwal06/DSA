#include<iostream>
#include<vector>
using namespace std;

//Time Complexity: O(m+n)
//Space COmplexity : O(1)
int main(){
    vector<int> arr1={1,3,8,9};
    vector<int> arr2={1,2,3};
    int m=arr1.size();
    int n=arr2.size();
    arr1.resize(m+n);
    int i=m-1;
    int j=n-1;
    int k=m+n-1;
    while(i>=0 && j>=0){
        if(arr1[i]>=arr2[j]){
            arr1[k--]=arr1[i--];
        }else{
            arr1[k--]=arr2[j--];
        }
    }
    while(j>=0){
        arr1[k--]=arr2[j--];
    }
    for (int i=0 ; i<m+n ; i++){
        cout<<arr1[i]<<" ";
    }
}