#include<iostream>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;
int main(){
    map<string, int> m;
    m["Muskan"]=100;
    m["Agarwal"]=101;
    m["Smile"]=102;
    m["Smile"]=104;
    m.emplace("Tinna",201);
    m.insert({"me",99});
    m.erase("Agarwal");
    for (auto val : m){
        cout<<val.first<<" "<<val.second<<endl;          //Sorted
    }
    cout<<"count: "<<m.count("Smile")<<endl;
    if (m.find("Muskan")!= m.end()){
        cout<<"Found\n";
    }else{
        cout<<"Not Found\n";
    }

    multimap<string, int> m1;
    m1.insert({"Muskan",100});
    m1.emplace("Agarwal",101);
    m1.insert({"Muskan",101});
    //m1.erase("Muskan");
    m1.erase(m1.find("Muskan"));
    for (auto val:m1){
        cout<<val.first<<" "<<val.second<<endl;
    }

    unordered_map<string, int> um;
    um.insert({"Muskan",100});
    um.emplace("Agarwal",101);
    um.insert({"Muskan",101});
    for (auto val:um){
        cout<<val.first<<" "<<val.second<<endl;
    }

    set<int> s;
    s.insert(2);
    s.emplace(4);
    s.emplace(1);
    s.emplace(2);
    cout<<"Lower bound: "<<*(s.lower_bound(2))<<endl;
    cout<<"Upper bound: "<<*(s.upper_bound(2))<<endl;
    for (int val : s){
        cout<<val<<" ";
    }
}