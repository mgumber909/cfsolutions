#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define pi 3.14159265
#define mod 1000000007
#define int long long
#define pb push_back


void solve(){
  int a,b,c;
  cin>>a>>b>>c;
  int k = abs(b-c);
  k+=(c-1);
  int s = abs(a-1);
  if(k<s) cout<<2<<endl;
  else if(k>s) cout<<1<<endl;
  else cout<<3<<endl;
  
} 

int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}