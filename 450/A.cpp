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
    queue<pair<int,int>> q;
    int n,m; cin>>n>>m;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      q.push({x,i+1});
    }
      int pos;
      auto r=q.front();
    while(!q.empty()){
      auto r=q.front();
      pos=r.s;
      int rem=r.f-m;
      q.pop();
      if(rem>0) q.push({rem,pos});
      //cout<<pos<<endl;
    }
    cout<<pos;
    
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