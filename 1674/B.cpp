#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
#define int long long 
#define pi 3.14159265
#define mod 1000000007
#define pb push_back
#define f first
#define s second

map<string,int> mp;
void make(){
  int k=1;
  for(char i='a';i<='z';i++){
    for(char j='a';j<='z';j++){
      if(i==j) continue;
      string ab="";
      ab+=i;
      ab+=j;
      mp[ab]=k;
      k++;
    }
  }
}
void solve(){
  string s;
  cin>>s;  
  cout<<mp[s];
  cout<<endl;  
}

int32_t main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin>>t;
  make();
  while(t--) 
  solve();
  
  return 0;
}