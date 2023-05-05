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
      int a=n;
      int c=0;
      if(n==3){
        cout<<"3 2 1\n1 3 2\n3 1 2\n";
        return;
      }
      cout<<1<<" "<<n;
      for(int i=n;i>=1;i--){
          if(i!=n&&i!=1) cout<<" "<<i;
        }
      cout<<endl;
      int b=1;
      while(b<=n){
        cout<<a<<" "<<b;
        
        for(int i=n;i>=1;i--){
          if(i!=a&&i!=b) cout<<" "<<i;
        }
        cout<<endl;
        b++;
        if(a==b) b++;
      }
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