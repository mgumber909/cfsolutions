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
      bool r,b,g;
      r=g=b=false;
      cin>>s;
      int i;
      for(i=0;i<6;i++)
      {
        if(s[i]=='r') r=true;
        if(s[i]=='g') g=true;
        if(s[i]=='b') b=true;
        if(s[i]=='R'&&!r) break;
        if(s[i]=='G'&&!g) break;
        if(s[i]=='B'&&!b) break;

      }
      if(i==6) cout<<"YES";
      else cout<<"NO";
      cout<<endl;
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