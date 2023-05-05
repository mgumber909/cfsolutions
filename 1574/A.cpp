#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        for(int i=0;i<n;i++){
           for(int j=0;j<=i;j++){
            cout<<"(";
           }
           for(int j=0;j<=i;j++){
            cout<<")";
           }
           if(i<n-1){
            for(int k=0;k<n-i-1;k++) cout<<"()";
           }
           cout<<endl;
        }
        //cout<<endl;

    }

}