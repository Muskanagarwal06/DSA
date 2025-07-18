#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator(pair<int, int> p1, pair<int, int> p2){   //Custom Comparator
    if (p1.second<p2.second) return true;
    if (p1.second>p2.second) return false;
    if (p1.first<p2.first) return true;
    else return false;
}
int main(){
    int arr[]={2,4,1,6,7};                  //Sort arrays
    int n=sizeof(arr)/sizeof(arr[0]);

    reverse(arr,arr+n);               //Reverse array
    for (int i=0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;  

    sort(arr,arr+n);
    for (int i=0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+n ,greater<int>() );         //Sort in descending order 
    for (int i=0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    vector<int> vect={1,2,8,6,4};            //Sort vectors
    int size=vect.size();
    sort(vect.begin(),vect.end());
    for (int val: vect){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<pair<int, int>> vec={{3,1},{2,1},{7,1},{5,2}};
    sort(vec.begin(),vec.end(),comparator);                      //Custtom Comparator passed
    for (auto p: vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    string s="abc";                               //Next permutation
    next_permutation(s.begin(),s.end());
    cout<<"Next Permutation: "<<s;

    return 0;
}