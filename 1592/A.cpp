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



void solve(){
   int n,h;
   cin>>n>>h;
   vector<int> v(n);
   for(int i=0;i<n;i++){
      cin>>v[i];
   }
   sort(v.begin(),v.end());
   int k1 = v[n-1] , k2 = v[n-2] ;
   int c=h/(k1+k2);
   int h1 = (k1+k2)*c;
   c*=2;
   if(h1<h) h1+=k1 ,c++; 
   if(h1<h) h1+=k2 ,c++;
   cout<<c<<endl; 
}


int32_t main(){
   fast_io
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}