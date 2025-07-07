#include<iostream>
using namespace std;

//Using Binary Exponentiation
//Time Complexity : O(logn)
double computePow(double x, int n){
    if (n==0) return 1.0;
    if (x==0) return 0;
    if (x==1) return 1.0;
    if (x==-1 && n%2==0) return 1.0;
    if (x==-1 && n%2!=0) return -1.0;
    int binForm=n;
    double answer=1.0;
    while(binForm>0){
        if ((binForm%2)==1){
            answer*=x;
        }
        x=(x*x);
        binForm=binForm/2;
    }
    return answer;
}
int main(){
    double x;
    cout<<"Enter value of x: ";
    cin>>x;
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    double answer=computePow(x,n);
    cout<<"Answer is: "<<answer;
}



//Time complexity : O(n)
// double computePow(double x,int n){
//     if (n<0){
//         x=1/x;
//         n=abs(n);
//     }
//     double ans=1.0;
//     for (int i=0 ; i<n ; i++){
//         ans*=x;
//     }
//     return ans;
// }
// int main(){
//     double x;
//     cout<<"Enter value of x: ";
//     cin>>x;
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;
//     double answer=computePow(x,n);
//     cout<<"Answer is: "<<answer;
// }