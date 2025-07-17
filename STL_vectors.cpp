#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vect={2,3,4,5,6};
    vect.erase(vect.begin()+1);
    vect.insert(vect.begin()+3,100);
    for (int val:vect){
        cout<<val <<" ";
    }
    // vect.clear();
    cout<<endl;
    cout<<vect.empty()<<endl;
    cout<<*(vect.begin())<<endl;
    cout<<*(vect.end()-1)<<endl;

    vector<int> vect1={1,2,3,4,5};
    vector<int>:: iterator it;
    for (it=vect1.begin() ; it!=vect1.end() ; it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //vector<int>:: reverse_iterator itr;
    for ( auto itr=vect1.rbegin(); itr!=vect1.rend() ; itr++){
        cout<<*(itr)<<" ";
    }
    cout<<endl;
    return 0;
}