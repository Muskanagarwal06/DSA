//Bubble Sort
//Time Complexity : O(n^2)

#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &vect , int n){
    for (int i=0 ; i<n-1 ; i++){
        bool isSwap=false;
        for (int j=0 ; j<n-1-i ; j++){
            if(vect[j]>vect[j+1]){
                swap(vect[j],vect[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){           //array is already sorted
            return;
        }
    }
}
void printVector(vector<int> vect, int n){
    for (int i=0 ; i<n ; i++){
        cout<<vect[i]<<" ";
    }
}
int main(){
    vector<int> vect={3,4,8,5,0,1,9};
    int n=vect.size();     
    bubbleSort(vect,n);
    printVector(vect,n);
}