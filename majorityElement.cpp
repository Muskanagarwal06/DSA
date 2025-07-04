#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Brute Force Approach
//Time Complexity O(n^2)
// int main(){
//     vector<int> nums={2,3,4,5,2,3,2,2,2,2,3,2};
//     int n=nums.size();
//     for (int val:nums){
//         int freq=0;
//         for(int ele: nums){
//             if(val==ele){
//                 freq++;
//             }
//         }
//         if(freq>n/2){
//             cout<<"Majority Element: "<<val;
//             break;
//         }
//     }
//     return 0;
// }


//Time Complexity O(nlogn+n)
// int main(){
//     vector<int> nums={2,4,3,6,5,5,4,4,4,4,4,4,4,5};
//     int n=nums.size();
//     sort(nums.begin(),nums.end());
//     int freq=1,val=nums[0];
//     for (int i=1 ; i<n ; i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//         }
//         else{
//             freq=1;
//             val=nums[i];
//         }
//         if(freq>n/2){
//             cout<<"Majority Element: "<<val;
//             break;
//         }
//     }
//     return 0;
// }

//Moore's Voting Algorithm
//Time Complexity O(n)
int main(){
    vector<int> nums={2,3,3,2,1,2,3,3,3,3,3,2,2};
    int freq=0;
    int ans=0;
    for (int val : nums){
        if(freq==0){
            ans=val;
        }
        if (val==ans){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans;
}