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
    int mi=INT_MAX;
    int f=1,j=0;
    for(int i=0;i<t;i++){
      int x; cin>>x;
      if(x==mi) f=0;
      if(x<mi) 
      {
        j=i;
        mi=min(mi,x);
        f=1;
      }
    }
    if(f) cout<<j+1;
    else cout<<"Still Rozdil";
}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}