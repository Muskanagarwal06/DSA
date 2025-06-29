#include<iostream>
using namespace std;
int main(){
    int decNum;
    cout<<"Enter number to convert to binary:";
    cin>>decNum;
    int ans=0;
    int remainder;
    int pow=1;
    while(decNum>0){
        remainder=decNum%2;
        decNum=decNum/2;
        ans+=(remainder*pow);
        pow*=10;
    }
    cout<<"Binary Form: "<<ans;
}