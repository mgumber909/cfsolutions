#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265


void solve(){
 int i=3; int n; cin>>n;
 for (int j = 1; j <=n; ++j)
 {
 	cout<<i<<" ";
 	i+=2;
 }
 cout<<endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
     int t; cin>>t;
  
  	  while(t--){
       solve();
    }
    return 0;
}