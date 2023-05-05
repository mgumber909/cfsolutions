#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n; cin>>n;
	ll a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	ll tt=0;
	ll max=a[0];
	for(int i=0;i<n;i++){
		a[i]=a[i]-tt;
		tt+=a[i];
		if(max<a[i]) max=a[i];
	}
	cout<<max<<endl;
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	 int t; cin>>t;
	 while(t--) 
	solve();
		
	}