#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define pi 3.14159265
#define mod 1000000007
#define int long long
#define pb push_back
#define ff first
#define ss second

void solve(){
  int n;
  cin>>n;
  map<string,int> mp;
  for(int i=0;i<n;i++){
    string s; cin>>s;
    mp[s]++;
    if(mp[s]>=2) cout<<s<<mp[s]-1;
    else cout<<"OK";
    cout<<endl;
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