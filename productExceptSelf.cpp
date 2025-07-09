#include<iostream>
#include<vector>
using namespace std;

//Time Complexity: O(n^2)
// int main(){
//     vector<int> vect={3,4,1,2,3};
//     int n=vect.size();
//     vector<int> ans(n,1);
//     for (int i=0 ; i<n ; i++){
//         for (int j=0 ; j<n ; j++){
//             if (i!=j){
//                 ans[i]*=vect[j];
//             }
//         }
//     }
//     cout<<"{ ";
//     for (int i=0 ; i< n ; i++){
//         if (i==n-1){
//             cout<<ans[i];
//             break;
//         }
//         cout<<ans[i]<<" , ";
//     }
//     cout<<" }";
// }



//Time Complexity : O(n)
//Space Complexity: O(n)
// int main(){
//     vector<int> vect={3,4,6,2};
//     int n=vect.size();
//     vector<int> ans(n,1);
//     vector<int> prefix(n,1);
//     vector<int> suffix(n,1);
//     for (int i=1 ; i<n ; i++){
//         prefix[i]=prefix[i-1]*vect[i-1];
//     }
//     for (int i=n-2 ; i>=0 ; i--){
//         suffix[i]=suffix[i+1]*vect[i+1];
//     }
//     for (int i=0 ; i<n ; i++){
//         ans[i]=prefix[i]*suffix[i];
//         cout<<ans[i]<<" ";
//     }
// }



//Time Complexity: O(n)
//Space Complexity: O(1)
int main(){
    vector<int> vect={4,3,2,2,1};
    int n=vect.size();
    vector<int> ans(n,1);
    for (int i=1 ; i< n ; i++){
        ans[i]=ans[i-1]*vect[i-1];
    }
    int suffix=1;
    for (int i=n-2; i>=0 ; i--){
        suffix*=vect[i+1];
        ans[i]=ans[i]*suffix;
    }
    for(int i=0 ; i<n ; i++){
        cout<<ans[i]<<" ";
    }
}