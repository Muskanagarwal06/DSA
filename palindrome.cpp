#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="9@M*adam9";
    int start=0;
    int end=str.length()-1;
    bool flag=true;
    while(start<end){
        if (!isalnum(str[start])){
            start++;
        }
        if(!isalnum(str[end])){
            end--;
        }
        if (tolower(str[start])==tolower(str[end])){
            start++;
            end--;
        }else{
            flag=false;
            break;
        }
    }
    if (flag){
        cout<<"Valid Palindrome";
    }else{
        cout<<"Invalid";
    }
}