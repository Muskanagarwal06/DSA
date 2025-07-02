#include<iostream>
using namespace std;
int main(){
    
    int arr[]={2,3,5,7,-2,3,-52,-4,7,-6};
    int size=sizeof(arr)/sizeof(int);
    int maximum=INT16_MIN;
    
    //Time Complexity O(n^3)
    // for (int st=0 ; st<size ; st++){
    //     for (int end=st ; end<size ; end++){
    //         int maximum=0;
    //         for (int i=st ; i<=end ; i++){
    //             maximum+=arr[i];
    //         }
    //         if(max<maximum){
    //             max=maximum;
    //         }
    //     }
    // }



    //Time Complexity O(n^2)
    //Brute Force Approach
    // for (int start=0 ; start<size ; start++){
    //     int currentSum=0;
    //     for (int end=start ; end<size ; end++){
    //         currentSum+=arr[end];
    //         maximum=max(currentSum,maximum);
    //     }
    // }


    //Time Complexity O(n)
    //Kadane's Algorithm
    int currSum=0;
    for(int i=0 ; i<size ; i++){
        currSum+=arr[i];
        maximum=max(maximum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }

    cout<<"Maximum Subarray Sum: "<<maximum;
}

