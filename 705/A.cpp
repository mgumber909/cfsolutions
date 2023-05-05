#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

void solve(){
	int n; cin>>n;
	string s="",s1="I hate",s2="I love";
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			if(i>1) s+="that ";
			s+=s1;
			s+=" ";
		}
		else{
			if(n>=2&&i>=2) s+="that ";
			 s+=s2;
			 s+=" ";
		}	
	}
	s+="it";
	cout<<s;
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