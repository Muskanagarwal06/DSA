#include<iostream>
#include<vector>
using namespace std;

//Time Complexity: O(logn)
//Space Complexity: O(1)

int binarySearch(vector<int> vect, int n){
    int st=0;
    int ed=n-1;
    if (n==1) return vect[0];
    while(st<=ed){
        int mid= st+(ed-st)/2;
        if (mid==0 && vect[mid]!=vect[mid+1]) return vect[mid];
        if (mid==n-1 && vect[mid] != vect[mid-1]) return vect[mid];
        if (vect[mid]!=vect[mid+1] && vect[mid]!=vect[mid-1])  return vect[mid];
        else if (mid%2==0){
            if(mid>0 && vect[mid]==vect[mid-1]){
                ed=mid-1;
            }else{
                st=mid+1;
            }
        }else{
            if (mid>0 && vect[mid]==vect[mid-1]){
                st=mid+1;
            }else{
                ed=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> vect={0,0,1,1,2};
    int n=vect.size();
    int answer=binarySearch(vect,n);
    cout<<"Single Element: "<<answer;
}