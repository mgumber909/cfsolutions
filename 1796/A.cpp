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
  int n; cin>>n;
  string s; cin>>s;
  string c = "FBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFBFBFFBFFB";
  int j =0;
  for(int i=0;i<c.length();i++){
   if(c[i]==s[0]){
      int k=i,j=0;
      for(;j<n;j++,k++){
         if(c[k]!=s[j]) break;
      }
      if(j==n){
         cout<<"YEs\n"; return;
      }
   }
  }

  cout<<"No\n";


}


int32_t main(){
   fast_io
  
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}