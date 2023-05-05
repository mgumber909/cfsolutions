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
 if(9-(s[0]-'0')<(s[0]-'0')&&9-(s[0]-'0')!=0) cout<<9-(s[0]-'0');
 else cout<<s[0];
 for(int i=1;i<s.length();i++){
  if(9-(s[i]-'0')<(s[i]-'0')){
    cout<<(9-(s[i]-'0'));
  }else cout<<s[i];
 }
}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}