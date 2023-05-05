#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;

int isVowel(char ch)
{
    return (0x208222 >> (ch & 0x1f)) & 1;
}
 
void solve(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i: a) cout<<i<<" ";
	nl
}

int32_t main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //  int t; cin>>t;
    //  while(t--){
    //  }
       solve();
    return 0;
}