#include<iostream>
#include<string>
#include<vector>
using namespace std;

//Time Complexity: O(n)
// Space Complexity : O(1)
int main(){
    vector<char> vect={'a','a','b','c','c','c'};
    int n=vect.size();
    int idx=0;
    for (int i=0 ; i<n ; i++){
        char ch=vect[i];
        int count=0;
        while(i<n && vect[i]==ch){
            count++;
            i++;
        }
        if (count==1){
            vect[idx++]=ch;
        }
        else{
            vect[idx++]=ch;
            string str=to_string(count);
            for(char dig:str){
                vect[idx++]=dig;
            }
        }
        i--;
    }
    vect.resize(idx);
    cout<<"Size: "<<idx<<endl;
    for (int i=0 ; i<idx ; i++){
        cout<<vect[i]<<" ";
    }
    return 0;
}