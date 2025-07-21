#include<iostream>
#include<cmath>
using namespace std;

//Time Complexity: O(log(n)) ->log base:10
int main(){
    int n=24884;
    int dig=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        dig++;
    }
    cout<<dig;
    // cout<<(int)(log10(n)+1);      //shortcut
}