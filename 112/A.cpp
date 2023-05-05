#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define int long long 
#define pi 3.14159265
void solve(){
   string s,t,s1="",t1="";
   cin>>s>>t;
   for(int i=0;i<s.length();i++) s1+=tolower(s[i]);
   for(int i=0;i<t.length();i++) t1+=tolower(t[i]);
   
   if(s1==t1) cout<<0;
   else if(lexicographical_compare(s1.begin(), s1.end(),t1.begin(), t1.end())){
   	cout<<-1;
   }
   else cout<<1;
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