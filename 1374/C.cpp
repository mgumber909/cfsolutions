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
      string s;
      int n; cin>>n;
      cin>>s;
      int count=0;
      int l=0,r=0;
      for(int i=0;i<n;i++){
        if(s[i]==')') r++;
        else l++;
        if(l<r) {
          count+=(r-l);
          l=0;r=0;
        }
        
      }
      cout<<count<<endl;
  }

  int32_t main() 
  {
    ios::sync_with_stdio(0);
    cin.tie(0);
      int t; cin>>t; 
      while(t--)
      solve();
      return 0;
  }