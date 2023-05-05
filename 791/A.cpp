#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define int long long 
#define pi 3.14159265
void solve(){
  int a,b,i;
  cin>>a>>b;
  for(i=1;;i++){
  	a*=3;b*=2;
  	if(a>b) break;
  }
  cout<<i;
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