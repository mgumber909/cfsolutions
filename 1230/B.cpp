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
  int x,y;
  cin>>x>>y;
  string s;
  cin>>s;
  int count=0;
  if(x==y&&x==1){
    s="0";
  }
  else if(y>0&&s[0]!='1'){
    s[0]='1';
    count++;
  }
  for(int i=1;count<y&&i<x;i++){
    if(s[i]!='0'){
        s[i]='0';
        count++;
    }
  }
  cout<<s;
}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}