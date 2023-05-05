#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define int long long 
#define pi 3.14159265
void solve(){
   int n,k;
   cin>>n>>k;
   int a[n],count=0;
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) {
   	if(a[i]>=a[k-1]&&a[i]!=0) count++;
   }
   cout<<count;

}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t;
   // precompute();
    // while(t--){
       solve();
    // }
    return 0;
}