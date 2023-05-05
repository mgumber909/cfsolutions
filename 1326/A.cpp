#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

/*
abc

*/


void solve(){
  int n; cin>>n;
  if(n==1) cout<<-1;
  else{
    cout<<2;
    for(int i=0;i<n-1;i++) cout<<7;
  }
  cout<<endl;
}

int32_t main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
      int t; cin>>t;
      while(t--)
       solve();
      
    return 0;
}