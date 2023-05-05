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
 int a[3];
 cin>>a[0]>>a[1]>>a[2];
 int mind=1000;
 for(int i=0;i<3;i++){
  mind=min(mind,(abs(a[i]-a[0])+abs(a[i]-a[1])+abs(a[i]-a[2])));
 }
 cout<<mind;

}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}