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
  int n; cin>>n;
  pair<int,int> a[n];
   for(int i=0;i<n;i++){
      cin>>a[i].ff;
      a[i].ss = i+1;
      a[i].ff%=2;
   }  
   sort(a,a+n);
   if(a[0].ff!=a[1].ff) cout<<a[0].ss;
   else cout<<a[n-1].ss;
   



} 



int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}