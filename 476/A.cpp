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
   int a,b;
   cin>>a>>b;
   int ma = INT_MAX;
   int st=0;
   for(int i=0;i*2<=a;i++){
    int k = (i*2);
    int l = (a-k);
    st = i+l;
    if(st%b == 0) ma=min(ma,st); 
   }
   if(ma == INT_MAX )cout<<-1;
   else cout<<ma;
    
} 



int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}