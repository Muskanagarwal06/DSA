#include <iostream>
#include <string>


using namespace std;

int main() {
    int size;
    cout<<"enter the size : ";
    cin>>size;
    
    string names[size];
    for(int i = 0;i<size;i++){
        cin>>names[i];
    }
    cout<<"names : "<<endl;
    for(int i = 0;i<size;i++){
        
        cout<<names[i]<<endl;
    }
    return 0;
}
