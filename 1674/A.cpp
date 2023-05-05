#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
#define int long long 
#define pi 3.14159265
#define mod 1000000007
#define pb push_back
#define f first
#define s second

void solve(){
  int x,y;
  cin>>x>>y;
  int ans = y/x;
  if(ans*x!=y) cout<<"0 0";
  else cout<<1<<" "<<ans;
  cout<<endl;
  
}

int32_t main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin>>t;
  
  while(t--) 
  solve();
  
  return 0;
}