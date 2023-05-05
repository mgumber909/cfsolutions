#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

void solve(){
	int n; cin>>n;
	int sum=0;
	if(n%2==0){
		int e=n/2;
		int o=n/2;
		sum=(e*(e+1))-(o*o);
	}else{
		int e=n/2 ;
		int o=n/2 + 1;
		sum=(e*(e+1))-(o*o);
	}
	cout<<sum;
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