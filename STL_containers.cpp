#include<iostream>
#include<list>
#include<deque>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
int main(){
    list<int> l;                //Lists
    l.push_back(3);
    l.push_front(2);
    for (int val : l){
        cout<<val<<" ";
    }
    cout<<endl;
    
    deque<int> d={1,2,3};       //Deque
    cout<<d[0]<<endl;

    pair<int, int> p={1,2};          //Pair
    cout<<p.first<<" "<<p.second<<" ";
    pair<string, int> p1={"muskan",31};
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int, pair<char,int>> p2={1,{'a',2}};
    cout<<p2.second.first<<endl;

    vector<pair<int, int>> vecto={{2,3},{1,2},{4,5}};
    for (pair<int, int> val : vecto){
        cout<<val.first<<" "<<val.second<<endl;
    }
    vecto.push_back({2,9});  //insert
    vecto.emplace_back(7,8); //in-place objects create

    stack<int> s;            //stack
    s.push(3);
    s.push(5);
    s.push(6);
    stack<int> s2;
    s2.swap(s);
    cout<<s.size()<<endl<<s2.size()<<endl;
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;

    queue<int> q;          //queue
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    priority_queue<int> pq;          //Priority Queue
    pq.push(1);
    pq.push(6);
    pq.push(3);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    priority_queue<int, vector<int> , greater<int>> pqr;      //Priority Queue Reverse
    pqr.push(1);
    pqr.push(6);
    pqr.push(3);
    while(!pqr.empty()){
        cout<<pqr.top()<<" ";
        pqr.pop();
    }
    cout<<endl;

    return 0;
}