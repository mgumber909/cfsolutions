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
     if(n==1&&m==10){
      cout<<-1;
      return;
     }
     cout<<m;
     int c=0;
     while(m){
      m/=10;
      c++;
     }
     for(int i=0;i<n-c;i++) cout<<0;

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