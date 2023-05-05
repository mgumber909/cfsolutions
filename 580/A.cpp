#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

 
void solve(){
	int n; cin>>n;
	int count=0,prev=0,maxi=0;
	for(int i=0;i<n;i++){
		int j; cin>>j;
		if(prev<=j||i==0){
			count++;
		}else{
			count=1;
		}
		prev=j;
		maxi=max(count,maxi);
	}
	cout<<maxi;
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