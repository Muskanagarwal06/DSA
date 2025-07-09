#include<iostream>
#include<vector>
using namespace std;

//Time Complexity: O(n^2)
// int main(){
//     vector<int> vect={3,5,1,2,7,6,8,9};
//     int n=vect.size();
//     int maxWater=0;
//     int start=0,end=0;
//     for (int i=0 ; i<n ; i++){
//         for (int j=i+1 ; j<n ; j++){
//             int wd=j-i;
//             int ht=min(vect[i],vect[j]);
//             int currWater=wd*ht;
//             if(currWater>maxWater){
//                 start=i;
//                 end=j;
//             }
//             maxWater=max(currWater,maxWater);
//         }
//     }
//     cout<<"Maximum Water: "<<maxWater<<" , "<<"Start:"<<start<<" , "<<"End:"<<end;
// }


//Time Complexity: O(n)
int main(){
    vector<int> vect={3,2,1,4,6,8,4,9};
    int n=vect.size();
    int start=0;
    int end=n-1;
    int maxWater=0;
    while(start<end){
        int width=end-start;
        int height=min(vect[start],vect[end]);
        int currWater=width*height;
        maxWater=max(maxWater,currWater);
        vect[start]<vect[end] ? start++ : end-- ;
    }
    cout<<"Maximum Water: "<<maxWater;
}
