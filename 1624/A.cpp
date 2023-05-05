#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define mod 1000000007;
#define f first 
#define s second


void solve(){
	int n,ai; cin>>n;
	int max=-1,min=INT_MAX;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	max=a[n-1];
	min=a[0];
	cout<<max-min<<endl;
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