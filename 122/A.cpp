#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
bool four(int i){
	while(i){
		int j=i%10;
		if(j!=4&&j!=7) return false;
		i/=10;
	}
	return true;
}
bool check(int n){
	for(int i=4;i<=n;i++){
		if(four(i)&&n%i==0) return true;
	}
	return false;
}
void solve(){
  int n; cin>>n;
  check(n)? cout<<"YES" : cout<<"NO";
  
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