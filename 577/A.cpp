  #include "bits/stdc++.h"
  using namespace std;
  #define nl cout<<"\n";
  #define mod 1000000007;
  #define int long long
  #define f first 
  #define s second
  #define For(a,n) for(int a=0;a<n;a++)     
  
  /*

  */
 
  void solve(){
     int n,m;
     cin>>n>>m;
     int count=0;
     for(int i=1;i<=min(n,m);i++){
      if(m%i==0){
        if((m/i)<=n&&(m/i)>=1) count++;
      }
     }
     cout<<count<<endl;
     

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