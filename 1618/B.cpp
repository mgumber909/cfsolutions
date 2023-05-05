#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

void solve(){
	int n;
	cin>>n;
	string ans="",s;
	cin>>ans;	
	for(int i=0;i<n-3;i++){
		cin>>s;
		if(ans[ans.length()-1]==s[0]){
			ans+=s[1];
		}else{
			ans+=s;
		}
	}
	if(ans.length()!=n){
		if(ans[ans.length()-1]=='a') ans+="b";
		else ans+="a";
	}
	cout<<ans;

	nl
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