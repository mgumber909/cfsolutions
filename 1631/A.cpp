#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

 
void solve(){
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	for(int i=0;i<n;i++){
		if(b[i]>a[i]) swap(a[i],b[i]);
	}
	int i=*max_element (a,a+n);
	int j=*max_element (b,b+n);
	cout<<i*j<<endl;
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