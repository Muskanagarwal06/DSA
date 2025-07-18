#include<iostream>
#include<string>
using namespace std;
bool isFreqSame(int freq1[],int freq2[]){
    for (int i=0 ; i<26 ; i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    bool found=false;
    string s1="muskan agarwal";
    string s2="gaa";
    int freq[26]={0};
    for (int i=0 ; i<s2.length() ; i++){
        int idx=s2[i]-'a';
        freq[idx]++;
    }
    int winSize=s2.length();
    for (int i=0 ; i<s1.length() ; i++){
        int winFreq[26]={0};
        int winIdx=0, idx=i;
        while(winIdx<winSize && idx<s1.length()){
            winFreq[s1[idx]-'a']++;
            winIdx++, idx++;
        }
        if (isFreqSame(freq,winFreq)){
            found=true;
            break;
        }
    }
    if (found==true){
        cout<<"Found";
    }else{
        cout<<"Not found";
    }
    return 0;
}