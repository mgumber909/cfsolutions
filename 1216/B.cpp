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
    pair<int,int> a[t];
    for(int i=0;i<t;i++){
      cin>>a[i].ff;
      a[i].ss=i+1;
    }
    sort(a,a+t,greater<pair<int,int>>());
    int h=0;
    for(int i=0;i<t;i++){
      h+=(a[i].ff*(i) + 1);
    }
    cout<<h<<"\n";
    for(pair<int,int> i : a) cout<<i.ss<<" ";

}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}