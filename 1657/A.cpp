#include "bits/stdc++.h"
using namespace std;
#define endl '\n'
#define int long long 
#define pi 3.14159265
#define mod 1000000007
#define pb push_back
#define f first
#define s second
  
void solve(){
    int x,y;
    cin>>x>>y;
    if(x==0&&y==0) cout<<0;
    else{
      float ans=sqrt((x*x)+(y*y));
      int x2=ans;
      if(x2*x2==ans*ans) cout<<1;
      else cout<<2;
    }
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