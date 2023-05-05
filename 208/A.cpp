#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

 
void solve(){
	string s,sol=""; cin>>s;
	int count=0,n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
			count++;
			i+=2;
		    if(sol[sol.length()-1]!=' ') sol+=" ";
			else if(count==1) continue;
			
		}
		else sol+=s[i];
	}
	cout<<sol;
	nl
}

int32_t main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
     // int t; cin>>t;
     // while(t--){
     //   solve();
     // }
    solve();
    return 0;
}