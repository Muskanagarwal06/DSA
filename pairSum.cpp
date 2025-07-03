#include<iostream>
#include<vector>
using namespace std;

//Time Complexity O(n^2)

// vector<int> pairSum(vector<int> & vec, int target){
//     vector<int> vect;
//     int n=vec.size();
//     for (int i=0 ; i<n ; i++){
//         for (int j=i+1 ; j<n ; j++){
//             if(vec[i]+vec[j]==target){
//                 vect.push_back(vec[i]);
//                 vect.push_back(vec[j]);
//             }
//         }
//     }
//     return vect;
// }
// int main(){
//     int target=11;
//     vector<int> vec={3,4,5,6,7,8,9,0};
//     vector<int> ans=pairSum(vec,target);
//     cout<<"[ ";
//     cout<<ans[0]<<","<<ans[1];
//     cout<<"]";
// }


//For sorted Array only
//Time Complexity  O(n)
vector<int> pairSum(vector<int> vect , int target){
    vector<int> vec;
    int n=vect.size();
    int start=0;
    int end=n-1;
    while(start<end){
        if(vect[start]+vect[end]==target){
            vec.push_back(vect[start]);
            vec.push_back(vect[end]);
            break;
        }
        else if((vect[start] + vect[end])>target){
            end-=1;
        }
        else{
            start+=1;
        }
    }
    return vec;
}
int main(){
    vector<int> vect={1,3,4,5,6,7,9};
    int target=9;
    vector<int> ans=pairSum(vect,target);
    cout<<ans[0]<<","<<ans[1];
}