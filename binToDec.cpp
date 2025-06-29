#include<iostream>
using namespace std;
int main(){
    int binNum;
    cout<<"Enter binary number to convert to decimal: ";
    cin>>binNum;
    int ans=0;
    int pow=1;
    while(binNum>0){
        int lstDigit=binNum%10;
        binNum=binNum/10;
        ans+=lstDigit*pow;
        pow*=2;
    }
    cout<<"Decimal form: "<<ans;
}