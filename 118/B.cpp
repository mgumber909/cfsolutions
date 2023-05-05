#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
#define pi 3.14159265
#define mod 1000000007
#define int long long
#define pb push_back
#define ff first
#define ss second

void upper(int n){
  
  int spaces=n*2;
  for(int i=0;i<=n;i++){
    for(int j=0;j<spaces;j++){
      cout<<" ";
    }
    int k=0;
    for(;k<i;k++){
      cout<<k<<" ";
    }
    for(;k>0;k--) 
      cout<<k<<" ";
    cout<<0;
    spaces-=2;
    cout<<endl;
  }
}
void lower(int n){
  int spaces=2;
  for(int i=n-1;i>=0;i--){
    for(int j=0;j<spaces;j++){
      cout<<" ";
    }
    int k=0;
    for(;k<i;k++){
      cout<<k<<" ";
    }
    for(;k>0;k--) cout<<k<<" ";
    cout<<0;
    spaces+=2;
    cout<<endl;
  }

}
void solve(){ 
  int n;
  cin>>n;
  upper(n);
  lower(n);
  
}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}