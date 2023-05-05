#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

 
void solve(){
	int x,y,z; cin>>x>>y>>z;
	int a=(x+y)*z;
	int b=x*(y+z);
	int c=x*y*z;
	int d=x+y*z;
	int e=x*y+z;
	int f=x+y+z;
	cout<<max(max(f,max(a,d)),max(e,max(b,c)));
	nl
}

int32_t main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
     // int t; cin>>t;
     // while(t--){
       solve();
     // }
    return 0;
}