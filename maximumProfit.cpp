#include<iostream>
#include<vector>
using namespace std;

//Time Complexity: O(n^2)
// int main(){
//     vector<int> vect={2,3,5,6,7,8};
//     int n=vect.size();
//     int max=0;
//     for (int i=0 ; i<n ; i++){
//         for (int j=i+1 ; j<n ; j++){
//             if ((vect[j]-vect[i])>max){
//                 max=vect[j]-vect[i];
//             }
//         }
//     }
//     cout<<max;
// }


//Time Complexity: O(n)
int main(){
    vector<int> vect={3,2,1,4,6,8,6};
    int n=vect.size();
    int maxProf=0;
    int bestBuy=vect[0];
    for(int i=1 ; i<n ; i++){
        if(vect[i]>bestBuy){
            maxProf=max(maxProf,(vect[i]-bestBuy));
        }
        bestBuy=min(bestBuy,vect[i]);
    }
    cout<<maxProf;
}
