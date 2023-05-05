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
      string s; cin>>s;
      int count=0;
      bool frst=false;
      for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z') count++;
        else if(i==0&&s[i]>='a'&&s[i]<='z') frst=true; 
      }
      if(count==s.length()||(count==s.length()-1&&frst))
      {
          
           for(int i=0;i<s.length();i++){
             if(isupper(s[i]))  s[i]=tolower(s[i]);
             else if(islower(s[i]))  s[i]=toupper(s[i]);
            }
      }
      cout<<s;
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