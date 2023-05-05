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
      map<string , string > mp;
      for(int i=0;i<m;i++){
        string s,p;
        cin>>s>>p;
        mp[s]=p;
      }
      string ans="";
      for(int i=0;i<n;i++){
        string s; cin>>s;
        if(s.length()<=mp[s].length()) {
          ans+=s;
          ans+=" ";
        }
        
        else {
          ans+=mp[s];
          ans+=" ";
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