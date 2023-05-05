#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define PI 3.14159265
#define mod 1000000007
#define int long long
#define pb push_back
#define ff first
#define ss second


void solve(){
    int t;
    cin>>t;
    int o=0,sum=0,mi=INT_MAX;
    for(int i=0;i<t;i++){
      int x; cin>>x;
      if(x%2==0) sum+=x;
      else {
        mi=min(x,mi);
        o+=x;
      }
    }
    if(o%2!=0) o-=mi;
    cout<<sum+o;
    
}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}