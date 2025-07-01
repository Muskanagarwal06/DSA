#include <iostream>
#include <string>


using namespace std;
void search(string names[], int size, string name) {
    for(int i = 0; i < size; i++) {
        if(names[i] == name) {
            cout << "Found " << name << " at index " << i << endl;
            return;
        }
    }
    cout << name << " not found in the array." << endl;
}
int main() {
    int size;
    cout<<"enter the size : ";
    cin>>size;
    
    string names[size];
    for(int i = 0;i<size;i++){
        cin>>names[i];
    }
    cout<<"names : "<<"[ ";
    for(int i = 0;i<size;i++){
        
        cout<<names[i]<<" ";
    }
    cout<<"]"<<endl;
    
    string resp;
    cout<<"Searching for a name ? ";
    cin>>resp;
    if(resp =="yes" || resp == "Yes" || resp == "YES"){
        string name;
        cout<<"enter the name : ";
        cin>>name;
        search(names,size,name);
    }
    
}

