#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
#define pi 3.14159265
#define mod 1000000007
#define pb push_back
#define int long long
#define ff first
#define ss second

void solve(){ 
 int n;
 cin>>n;
 int x;
 cin>>x;
 set<int> ans;
 for(int i=1;i<=n;i++){
  int k;
  cin>>k;
  for(int j=0;j<k;j++){
    int tp;
    cin>>tp;
    if(tp<x) ans.insert(i);
  } 
 }
 cout<<ans.size()<<endl;

 for(int i:ans) cout<<i<<" ";
}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}