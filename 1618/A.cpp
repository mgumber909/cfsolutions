#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

void solve(){
	int a[7];
	//int count=0,prev=0,maxi=0;
	for(int i=0;i<7;i++){
		cin>>a[i];
	}
	if(a[0]+a[1]+a[2]==a[6])
	{
		cout<<a[0]<<" "<<a[1]<<" "<<a[2];
	}
	else{
		cout<<a[0]<<" "<<a[1]<<" "<<a[3];
	}
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