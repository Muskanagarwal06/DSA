#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Time Complexity: O(nlogn)
//Space Complexity: O(1)
// void sort(vector<int> &nums, int size){
//     sort(nums.begin(), nums.end());
// }


//Time Complexity: O(n)
// void sort(vector<int> &nums, int size){
//     int count0=0,count1=0,count2=0;
//     for (int i=0 ; i< size ; i++){
//         if (nums[i]==0){
//             count0++;
//         }else if(nums[i]==1){
//             count1++;
//         }else{
//             count2++;
//         }
//     }
//     int idx=0;
//     for(int i=0 ; i<count0 ; i++){
//         nums[idx++]=0;
//     }
//     for (int i=0; i<count1 ; i++){
//         nums[idx++]=1;
//     }
//     for (int i=0 ; i<count2 ; i++){
//         nums[idx++]=2;
//     }
// }

//Time Complexity: O(n) -> Most Optimal
//Dutch National Flag Algorithm
void sort(vector<int> &nums, int size){
    int low=0, mid=0 , high=size-1;
    while(mid<=high){
        if (nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }else if (nums[mid]==1){
            mid++;
        }else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}

void print(vector<int> &nums,int size){
    for (int i=0 ; i<size ; i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int> nums={0,2,1,1,2,1,1,0,0};
    int size=nums.size();
    sort(nums,size);
    print(nums,size);
}