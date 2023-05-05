#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define int long long 
#define pi 3.14159265
void solve(){
  string s;
  cin>>s;
  string s1="";
  for(int i=0;i<s.length();i++){
  	char si=tolower(s[i]);
  	if(si=='a'||si=='e'||si=='i'||si=='o'||si=='u'||si=='y') continue;
  		
  		s1+=".";
  		s1+=si;

  }
  cout<<s1;
  cout<<endl;
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