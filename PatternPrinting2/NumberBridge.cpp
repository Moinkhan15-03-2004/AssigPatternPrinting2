#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){// upppar ke liye star
        cout<<i;
    }
    cout<<endl;
    int m = n-1;
    int nsp = 1;
    for(int i=1;i<=m;i++){
        //star
        for(int j=1;j<=m+1-i;j++){
            cout<<j;
        }
        // spaces
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        
         
        //star
        for(int j=1;j<=m+1-i;j++){
            cout<<j++;
        }
        cout<<endl;
    }

    
}