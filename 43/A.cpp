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
     int n;
     cin>>n;
     string s;
     map<string,int> mp;
     for(int i=0;i<n;i++){
         cin>>s;
         mp[s]++;
     }
     int max=0;
     string ans;
     for(auto i:mp){
        if(i.s>max) {
          max=i.s;
          ans=i.f;
        }
     }
     cout<<ans;
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