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
   vector<int> v(27,-1);
   int n; cin>>n;
   string s; cin>>s;
   for(int i=0;i<n;i++){
      int f = i%2;
      if(v[(s[i]-'a')]==-1){
         v[(s[i]-'a')]=f;
      }
      else if(v[(s[i]-'a')]!=f){
         cout<<"NO\n"; return;
      }
   }
   cout<<"YES\n";

}


int32_t main(){
   fast_io
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}