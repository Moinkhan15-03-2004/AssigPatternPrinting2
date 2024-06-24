#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){// upppar ke liye star
        cout<<(char)(i+64);
    }
    cout<<endl;
    int m = n-1;
    int nsp = 1;
    for(int i=1;i<=m;i++){
        //star
        for(int j=1;j<=m+1-i;j++){
            cout<<(char)(j+64);
        }
        // spaces
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        
         
        //star
        for(int j=i-1;j>=1;j--){
            cout<<(char)(j+64);
        }
        cout<<endl;
    }

    
}