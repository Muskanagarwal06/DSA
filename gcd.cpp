#include <iostream>
using namespace std;

//Time Complexity: O(log(n))
// int main(){
//     int a = 15, b = 0;
//     int gcd = 1;
//     if (a == 0)
//         cout << b;
//     else if (b == 0)
//         cout << a;
//     else if (a == b)
//         cout << a;
//     else{
//         for (int i = 1; i < min(a, b); i++)
//         {
//             if (a % i == 0 && b % i == 0)
//             {
//                 gcd = i;
//             }
//         }
//         cout << gcd;
//     }
// }

//Euclid's Algorithm
int gcd(int a, int b){
    while(a>0 && b>0 ){
        if (a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if (a==0) return b;
    return a;
}
int gcdRec(int a, int b){           //gcd recursion
    if (b==0) return a;
    else{
        gcdRec(b,a%b);
    }
}
int LCM(int a, int b){
    int GCD=gcd(a,b);
    return (a*b)/GCD;
}
int main(){
    int a=20, b=28;
    cout<<gcd(a,b)<<endl;
    cout<<LCM(a,b)<<endl;
    if (a>b){
        cout<<gcdRec(a,b);
    }else{
        cout<<gcdRec(b,a);
    }
}