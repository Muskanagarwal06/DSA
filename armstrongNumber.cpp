#include<iostream>
using namespace std;

//Armstrong Number: It is a number that is equal to the sum of cubes of its digit.
bool isArmstrong(int n){
    int copyN=n;
    int sumOfCubes=0;
    while(n!=0){
        int dig=n%10;
        sumOfCubes+=(dig*dig*dig);
        n=n/10;
    }
    return sumOfCubes==copyN;
}
int main(){
    int n=143;
    if (isArmstrong(n)){
        cout<<"Is Armstrong number";
    }else{
        cout<<"Not an armstrong number";
    }
}