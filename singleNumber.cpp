#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& vec){
    int ans=0;
    for (int val:vec){
        ans=(ans)^(val);               //Bitwise ^(XOR) operator
    }
    return ans;
}
int main(){
    vector<int> vec={3,4,5,4,3,5,2};
    cout<<"Single Number: "<<singleNumber(vec);
}