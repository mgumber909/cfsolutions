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
     int a,b,x,y;
     cin>>x>>y>>a>>b;
     if(x==0&&y==0)
      cout<<0<<endl;
     else if(x==0&&y!=0)
        cout<<a*y<<endl;
     else if(y==0&&x!=0)
      cout<<a*x<<endl;
     else{
      int way1=0,way2=0;
        int p=min(x,y);
        way1+=p*b;
        way2+=(y*a)+(x*a);
        x-=p; y-=p;
        way1+=(x*a)+(y*a);
      cout<<min(way2,way1)<<endl;
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