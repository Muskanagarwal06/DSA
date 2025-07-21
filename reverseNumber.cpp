#include<iostream>
using namespace std;
int main(){
    int n=3434;
    int reverse=0;
    while(n!=0){
        int dig=n%10;
        if (reverse>INT16_MAX/10 || reverse<INT16_MIN/10){
            return 0;
        }
        reverse=(reverse*10) + dig;
        n=n/10;
    }
    cout<<reverse;
}