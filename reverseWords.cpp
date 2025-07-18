#include<iostream>
#include<string>
#include<algorithm>

//Time Complexity: O(n)
//Space Complexity: O(n)
using namespace std;
int main(){
    string str=" My name is Muskan  Agarwal ";
    string ans="";
    int start=0;
    int end=str.length()-1;
    while(start<end){
        swap(str[start++],str[end--]);
    }
    for(int i=0 ; i<str.length() ; i++){
        string word="";
        while(i<str.length() && str[i]!=' '){
            word+=str[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if (word.length()>0){
            ans+=" "+word;
        }
    }
    cout<<"Updated string:"<<ans.substr(1);
} 