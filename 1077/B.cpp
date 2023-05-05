#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
#define pi 3.14159265
#define mod 1000000007
#define pb push_back
#define int long long
#define ff first
#define ss second


void solve(){ 
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int count=0;
  for(int i=1;i<n-1;i++){
    if(a[i]==0&&a[i-1]==1&&a[i+1]==1){
      a[i+1]=0;
      count++;
    }
  }
  cout<<count;

}


int32_t main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  // int t; cin>>t;
  // while(t--)
  solve();
  return 0;
}