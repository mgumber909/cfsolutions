#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define PI 3.14159265
#define mod 1000000007
#define int long long
#define pb push_back
#define ff first
#define ss second
int ii=0;


void solve(){
   int n;
   cin>>n;
   int a[n+1][n+1];
   for(int i=0;i<n;i++){
    string s; cin>>s;
    for(int j=0;j<n;j++){
      a[i][j]=s[j]-'0';
    }
   }
   int f=1;
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          if(a[i][j]==1){
            if(j==n-1||i==n-1||a[i+1][j]==1||a[i][j+1]==1){}
            else f=0; 
          }
      }
   }
    if(f) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}

int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}