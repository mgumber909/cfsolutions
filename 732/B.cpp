#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
#define int long long 
#define pi 3.14159265
#define mod 1000000007
#define pb push_back
#define f first
#define s second

void solve(){
    int n,k; cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
      b[i]=a[i];
    }
    int count=0;
    for(int i=1;i<n;i++){
      if(a[i-1]+a[i]<k){
       a[i]=k-a[i-1];
      } 
    }
    for(int i=0;i<n;i++) count+=a[i]-b[i];
    cout<<count<<endl;
    for(int i: a) cout<<i<<" ";
}


int32_t main()
 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
     // int t; cin>>t;
     // while(t--)
     solve();
      
    return 0;
}