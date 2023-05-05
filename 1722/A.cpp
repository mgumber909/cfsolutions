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
    int n;
    cin>>n;
    string s="Timur",m;
    cin>>m;
    if(n>5) cout<<"NO";
    else {
      sort(s.begin(),s.end());
      sort(m.begin(),m.end());
      if(s==m) cout<<"YEs";
      else cout<<"NO";
    }
    cout<<"\n";

}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}