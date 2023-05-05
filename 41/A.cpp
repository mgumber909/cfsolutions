#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265


void solve(){
  string n,m; cin>>n>>m;
  reverse(m.begin(), m.end());
  (n==m) ? cout<<"YES" : cout<<"NO";
  
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t;
  
  	 // while(t--){
       solve();
    // }
    return 0;
}