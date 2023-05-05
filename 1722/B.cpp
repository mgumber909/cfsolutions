#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define PI 3.14159265
#define mod 1000000007
#define int long long
#define pb push_back
#define ff first
#define ss second


void solve(){
    int s;
    cin>>s;
    string s1,s2;
    cin>>s1>>s2;
    int f=0;
    for(int i=0;i<s1.length();i++){
      if(s1[i]=='G'||s1[i]=='B') {
        s1[i]='G';
      }
      if(s2[i]=='G'||s2[i]=='B'){
        s2[i]='G';
      }
      
    }
   // cout<<s1<<" "<<s2<<"" ;
    if(s1==s2) cout<<"YEs";
    else cout<<"no";
    cout<<"\n";

}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}