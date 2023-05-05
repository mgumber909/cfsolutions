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
    int a[t];
    for(int i=0;i<t;i++) cin>>a[i];
    for(int i=t-1;i>=0;i--){
    
      if(a[i]>1) {
        if(a[i-1]<a[i]) {
          a[i-1]=a[i]-1;
        }
          a[i]=1;
      }
      
    }
    for(int i : a) cout<<i<<" ";
    cout<<endl;
}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}