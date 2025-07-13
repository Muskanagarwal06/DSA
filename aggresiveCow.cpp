//Aggresive Cow Problem.
//You're given N stalls and you need to place C cows such that the minimum distance between any two cows is as large as possible.
//You return this maximum of the minimum distances.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isValid(vector<int> arr,int N, int C, int longMinDis){
    int cow=1,currCowPosition=arr[0];
    for (int i=1; i<N ; i++ ){
        if(arr[i]-currCowPosition>=longMinDis){
            currCowPosition=arr[i];
            cow++;
        }
        if(cow==C){
            return true;
        }
    }
    return false;
}
int binarySearch(vector<int> arr, int N, int C){         //O(log(n) * N)
    if (C>N){
        return -1;
    }
    int ans=-1;
    int start=1;
    sort(arr.begin(),arr.end());
    int end=arr[N-1]-arr[0];
    while(start<=end){
        int mid=start + (end-start)/2;
        if (isValid(arr,N,C,mid)){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={4,3,9,7,6};
    int N=5, C=3;
    int answer=binarySearch(arr,N,C);
    cout<<"Longest minimum distance: "<<answer;
}
