#include<iostream>
#include<string>
using namespace std;

//STL string functions
int main(){
    string str="Hello WOrlld";
    string sstr="ll";
    while(str.length()>0 && str.find(sstr)<str.length()){
        str.erase(str.find(sstr),sstr.length());
    }
    cout<<"Updated String: "<<str;
}