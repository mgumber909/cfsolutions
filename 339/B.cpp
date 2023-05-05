#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	
	int n,m;
	cin>>n>>m;
	int cur=1;
	ll count=0;
	for(int i=0;i<m;i++){
		int tmp;
		cin>>tmp;

		if(tmp>=cur){
			count+=(tmp-cur);
			cur=tmp;
		}else{
			count+=(n-cur);
			cur=0;
			count+=(tmp-cur);
			cur=tmp;
		}
		//cout<<count;
	}
	cout<<count;
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	// int t; cin>>t;
	// while(t--) 
	solve();
		
	}