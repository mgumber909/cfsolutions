#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
void solve(){
  int k,n,w; cin>>k>>n>>w;
  int total=(w*(w+1)/2);
  total*=k;
  (total-n>0)? cout<<total-n : cout<<0;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   //   int t; cin>>t;
   // // precompute();
   //   while(t--){
       solve();
   //   }
    return 0;
}