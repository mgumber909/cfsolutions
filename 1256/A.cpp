#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

/*
abc

*/


void solve(){
	int a,b,n,s;
	cin>>a>>b>>n>>s;
	int bro=1;
	bro++; bro--;
	int sum=a*n+b;
	if(sum>=s&&s%n<=b) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
	
}


int32_t main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
      int t; cin>>t;
      while(t--)
       solve();
      
    return 0;
}