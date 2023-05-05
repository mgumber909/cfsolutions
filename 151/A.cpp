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
 int  n, k, l, c, d, p, nl, np;
 cin>> n >> k >> l >> c >> d >> p >> nl >> np;
 int k1 = (k*l)/nl;
 int k2 = (c*d);
 int k3 =  p/np;
 cout<<min(k1,min(k2,k3))/n;

}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}