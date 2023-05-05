#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
void solve(){
  int n,k;
  cin>>n>>k;
  for(int i=0;i<k;i++){
  	if(n%10==0) n/=10;
  	else n--;
  }
  cout<<n;
  nl
  
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