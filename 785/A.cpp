#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
#define pi 3.14159265
#define mod 1000000007
#define int long long
#define pb push_back
#define ff first
#define ss second

void solve(){ 
  int n;
  cin>>n;
  string s;
  int sum=0;
  for(int i=0;i<n;i++){
    cin>>s;
    if(s[0]=='I') sum+=20;
    if(s[0]=='T') sum+=4;
    if(s[0]=='C') sum+=6;
    if(s[0]=='O') sum+=8;
    if(s[0]=='D') sum+=12;
  }
  cout<<sum;
  
}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}