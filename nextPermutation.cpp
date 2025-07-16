#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Time Complexity : O(n)
//Space Complexity : O(1)
int main(){
    vector<int> vect={1,2,3,5,3,1,0};
    int n=vect.size();
    int pivot=-1;
    for (int i=n-2 ; i>=0 ; i--){
        if (vect[i]<vect[i+1]){
            pivot=i;
            break;
        }
    }
    if (pivot==-1){
        int i=0;
        int j=n-1;
        while(i<=j){
            swap(vect[i++],vect[j--]);
        }
        for (int i=0 ; i< n ; i++){
            cout<<vect[i]<<" ";
        }
    }
    for (int i=n-1; i>pivot ; i--){
        if(vect[i]>vect[pivot]){
            swap(vect[i], vect[pivot]);
            break;
        }
    }
    reverse(vect.begin() + pivot+1 , vect.end());
    // int i=pivot+1;
    // int j=n-1;
    // while(i<=j){
    //     swap(vect[i++],vect[j--]);
    // }
    for (int i=0 ; i<n ; i++){
        cout<<vect[i]<<" ";
    }
    return 0;
}