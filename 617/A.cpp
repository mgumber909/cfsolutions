#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
void solve(){
  int n,i; cin>>n;
  for(i=0;;i++){
  	if(n==0) break;
  	if(n-5>=0) n-=5;
  	else if(n-4>=0) n-=4;
  	else if(n-3>=0) n-=3;
  	else if(n-2>=0) n-=2;
  	else if(n-1>=0) n--;
  }
  cout<<i;
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