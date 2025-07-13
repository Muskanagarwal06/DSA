//Allocate Books Problem.

#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int> vect, int n , int m ,int maxAllowedPages){
    int students=1;
    int books=0;
    for (int i=0 ; i<n ; i++){           //O(n)
        if (vect[i]>maxAllowedPages){
            return false;
        }
        if(books+vect[i]<=maxAllowedPages){
            books+=vect[i];
        }else{
            students++;
            books=vect[i];
        }
    }
    return students>m ? false: true;
}
int binarySearch(vector<int> vect, int n, int m,int sum){       //O(logN*n)
    if(m>n){
        return -1;
    }
    int st=0;
    int ed=sum;
    int ans=-1;
    while(st<=ed){      
        int mid=st+(ed-st)/2;
        if (isValid(vect,n,m,mid)){
            ans=mid;
            ed=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> vect={15,17,20,13};
    int n=4,m=2;
    int sum=0;
    for (int val:vect){     //O(n)
        sum+=val;
    }
    int answer=binarySearch(vect, n, m,sum);
    cout<<"Minimum no. of pages: "<<answer;
}