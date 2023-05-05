  #include "bits/stdc++.h"
  using namespace std;
  #define nl cout<<"\n";
  #define mod 1000000007;
  #define int long long
  #define f first 
  #define s second
  #define For(a,n) for(int a=0;a<n;a++)     
  
  /*
   8 4 2 6 
  */
  
  void solve(){   
      int n,m;  
      int a[]={6,8,4,2};
      cin>>n;
      if(n==0) cout<<1;
      else
      cout<<a[(n%4)];//<<" "<<(int)pow(1378,n);

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