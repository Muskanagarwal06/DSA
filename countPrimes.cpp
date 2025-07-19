#include<iostream>
#include<vector>
using namespace std;

//Sieve of Eratosthenes 
// Algorithm to count prime numbers less than n.
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<bool> isPrime(n+1,true);
    int count=0;
    for(int i=2 ; i<n ; i++){
        if (isPrime[i]){
            count++;
        }
        for (int j=i*2 ; j<n ; j=j+i){
            isPrime[j]=false;
        }
        
    }
    cout<<"Prime Count: "<<count;
}