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
  int n,k; cin>>n>>k;
  int a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
   }  
   sort(a,a+n);
   double ma=(a[0]);
   for(int i=0;i<n-1;i++){
      double m = (a[i+1]-a[i]);
      ma = max(ma,m/2);
   }
   double m = (k-a[n-1]);
   ma = max(ma,m);
   cout<<fixed<<setprecision(11)<<ma;
} 

int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}