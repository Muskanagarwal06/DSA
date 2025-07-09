#include <iostream>
#include <string>


using namespace std;

int main() {
    string arr[] = {"apple", "banana", "cherry", "date", "fig", "grape"};
    string target;
    cout<<"enter thr string to search : ";
    cin >> target;
    bool found = false;
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i] == target){
            cout<<"fruit found at index: " << i << endl;
            found = true;
        }
    }
    if(!found){
        cout<<"fruit not found"<<endl;
    }
    
    return 0;
}