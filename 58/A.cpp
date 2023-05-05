#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
void solve(){
  string s="hello",ss;
  cin>>ss;
  int j=0;
  for(int i=0;i<=ss.length()-1;i++){
  		if(s[j]==ss[i]) j++;
  }
  if(j==s.length()) cout<<"YES";
  else cout<<"NO";
  
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