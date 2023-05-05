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
    int t,b;
    cin>>t>>b;
    int aa[t],bb[t],mi=INT_MAX;
    for(int i=0;i<t;i++){
      cin>>aa[i];
      bb[i]=aa[i]+b;
      mi=min(bb[i],mi);
    }
    int f=1;
    for(int i=0;i<t;i++){
      if(abs(mi-aa[i])>b) f=0;
    }
    if(f)cout<<mi<<endl;
    else cout<<-1<<endl;
}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}