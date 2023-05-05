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
   int sum=0;
   for(int i=0;i<=n/2;i++){
    sum+=(i*8)*i;
   }
   cout<<sum<<endl;
   
    
} 



int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}