#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265


void solve(){
	string s;
  int i; cin>>i>>s;
  (count(s.begin(), s.end(),'D')>count(s.begin(),s.end(),'A')) ? cout<<"Danik" : (count(s.begin(), s.end(),'D')==count(s.begin(),s.end(),'A')) ? cout<<"Friendship" : cout<<"Anton" ; 
  
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