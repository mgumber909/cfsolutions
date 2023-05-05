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
  int a[12];
  for(int i=0;i<12;i++){
    cin>>a[i];
  }
  sort(a,a+12,greater<int>());
  int k=0,c=0;
  for(int i=0;i<12;i++){
    if(k>=n) break;
    k+=(a[i]);
    c++;
  }
  if(k>=n) cout<<c;
  else cout<<-1;

} 

int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}