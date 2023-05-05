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
    int n,b,x,y;
    cin>>n>>b>>x>>y;
    int sum=0,cur=0;
    for(int i=0;i<n;i++){
      if(cur+x<=b) cur+=x;
      else cur-=y;
      sum+=cur;
    }
    cout<<sum<<endl;
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