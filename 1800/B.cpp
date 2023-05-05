#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define read(x) int x; cin >> x
using namespace std;

#define endl "\n"
#define PI 3.14159265
#define ff first
#define ss second


#define ull unsigned long long 

int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
/*
Ideas
*/

void solve(){
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  unordered_map<char,int> lower,upper;
  for(int i=0;i<n;i++){
      if(islower(s[i])) lower[s[i]]++;
      else upper[s[i]]++;
  }
  int ans = 0;
  for(auto i: lower){
   if(min(i.second,upper[(i.first -32)])!=0){
    ans+=min(i.second,upper[(i.first -32)]);
    int kk = min(i.second,upper[(i.first -32)]);
    lower[i.first]-=kk;
    upper[(i.first -32)]-=kk;
   }
  }
  for(auto i: upper){
   if(i.second>1&&k>0){
      int kk = i.second/2;
      ans+=min(kk,k);
      k-=kk;
   }
  }
  for(auto i: lower){
   if(i.second>1&&k>0){
      int kk = i.second/2;
      ans+=min(kk,k);
      k-=kk;
   }
  }
  cout<<ans<<endl;

}


int32_t main(){
   fast_io
  
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}