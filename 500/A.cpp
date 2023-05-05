  #include "bits/stdc++.h"
  using namespace std;
  #define nl cout<<"\n";
  #define mod 1000000007;
  #define int long long
  #define f first 
  #define s second
  #define For(a,n) for(int a=0;a<n;a++)     
  /*
      0 0 0
      0 1 1
      1 0 1
      1 1 1

  */

  void solve(){
      int n,m;
      cin>>n>>m;
      int a[n+1];
      for(int i=1;i<=n;i++) cin>>a[i];
      int i=1,pos=1;
      while(i<m){
        i+=a[i];
        //cout<<a[i]<<" ";
      }
      if(i==m) cout<<"Yes";
      else cout<<"No";
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