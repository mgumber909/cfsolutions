#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define int long long 
#define pi 3.14159265
void solve(){
   int n; cin>>n;
   int a=0;
   for(int i=0;i<n;i++){
   	string s;
   	cin>>s;
	if(s[1]=='+') a++;
	else a--;
   }
   cout<<a;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t;
   // precompute();
    // while(t--){
       solve();
    // }
    return 0;
}