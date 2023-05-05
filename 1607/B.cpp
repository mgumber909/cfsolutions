#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll x,n;
	cin>>x>>n;
	ll pos=(n)-(n%4);
	for(ll i=pos+1;i<=n;i++){
		
		
		if(x&1) x+=i;
		else x-=i;
	}

	cout<<x<<endl;
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	 int t; cin>>t;
	 while(t--) 
	solve();
		
	}