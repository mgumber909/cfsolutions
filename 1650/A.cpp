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
     string s; char c;
      cin>>s;
      cin>>c;
      //cout<<s;
      bool ans=false;
      if(s.length()==1){
        if(s[0]==c) cout<<"YES\n";
        else cout<<"NO\n";
        return;
      }
      for(int i=0;i<s.length();i++){
        if(s[i]==c&&i%2==0){
          ans=true;
          break;
        }
      }
      if(ans) cout<<"YES\n";
      else cout<<"NO\n";
  }

  int32_t main() 
  {
    ios::sync_with_stdio(0);
    cin.tie(0);
      int t;
      cin>>t;
      while(t--)
      solve();
      return 0;
  }