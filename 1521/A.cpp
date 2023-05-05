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
      cin>>n>>m;  
      if(m==1){
        cout<<"NO"<<endl;
        return;
      }      
        int c=m*n*7;
        int a=n;
        int b=c-a;
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<c;
      
      cout<<endl;
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