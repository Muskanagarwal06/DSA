#include<iostream>
#include<vector>                 //STL: Standard template library
using namespace std;
int main(){
    vector<int> vec;
    cout<<vec.size()<<endl;          //Output: 0
    vec.push_back(5);
    cout<<vec.size()<<endl;          //Output: 1
    vec.pop_back();
    cout<<vec.size()<<endl;            //Output: 0
    vector<int> vect={1,2,33};       
    cout<<vect[1]<<endl;                //Output: 2
    cout<<vect.size()<<endl;           //Output:3
    cout<<vect.front()<<" "<<vect.back()<<endl;       //Output: 1 33
    vector<int> vec2(4,8);
    cout<<vec2[3]<<endl;              //Output: 8
    for (int i: vec2){
        cout<<i<<" ";                    //Output: 8 8 8 8
    }
    cout<<endl;
    vector<char> charVec={'a','b','c'};
    for(char i: charVec){
        cout<<i<<" ";                    //Output: a b c
    }
    cout<<endl;
    cout<<charVec.at(0)<<endl;           //Output: a
    return 0;
}