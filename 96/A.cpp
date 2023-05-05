#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define int long long 
#define pi 3.14159265
void solve(){
  string s; cin>>s;
  char same=s[0]; int count=0; bool yes=false;
  for(int i=0;i<s.length();i++){
  		 if(s[i]==same) count++;
  		 else{
  		 	same=s[i];
  		 	if(count>=7) yes=true;
  		 	count=1;
  		 }
  		 if(count>=7) yes=true;
  		 
  }
  if(yes) cout<<"YES";
  else cout<<"NO";
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