#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
#define pi 3.14159265
#define mod 1000000007
#define pb push_back
#define int long long
#define ff first
#define ss second

void solve(){ 
  string s;
  cin>>s;
  reverse(s.begin(), s.end());
  vector<string> ans;
  for(int i=0;i<s.length();i++){
    if(s[i]=='0') continue;
    string tm="";
    tm+=s[i];
    for(int j=0;j<i;j++) tm+='0';
    ans.pb(tm);
  }
  cout<<ans.size()<<endl;
  for(string i:ans) cout<<i<<" ";
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