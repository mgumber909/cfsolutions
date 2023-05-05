#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

 
void solve(){
	string s;
	cin>>s;
	int n=s.length();
	bool ans=true;

	for(int i=0;i<n/2;i++){		
		if(s[i]!=s[i+(n/2)]) ans=false; 
	}
	(n%2==0&&ans) ? cout<<"YES" : cout<<"NO";
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