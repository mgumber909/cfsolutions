/*                         _
                        _ooOoo_
                       o8888888o
                       88" . "88
                       (| -_- |)
                       O\  =  /O
                    ____/`---'\____
                  .'  \\|     |//  `.
                 /  \\|||  :  |||//  \
                /  _||||| -:- |||||_  \
                |   | \\\  -  /'| |   |
                | \_|  `\`---'//  |_/ |
                \  .-\__ `-. -'__/-.  /
              ___`. .'  /--.--\  `. .'___
           ."" '<  `.___\_<|>_/___.' _> \"".
          | | :  `- \`. ;`. _/; .'/ /  .' ; |
          \  \ `-.   \_\_`. _.'_/_/  -' _.' /
===========`-.`___`-.__\ \___  /__.-'_.'_.-'================
 
         
                  Please give me AC.
*/
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
ab ac bc 
*/
bool alt(string s, string t){
   for(int i=0;i<s.size()-1;i++)
      if(s[i]==s[i+1]) return false;
   for(int i=0;i<t.size()-1;i++)
      if(t[i]==t[i+1]) return false;
   return true;
}
void solve(){
  int n,m;
  cin>>n>>m;
  string s,t;
  cin>>s>>t;
  string k =s , l = t;
  if(alt(l,k)){
         cout<<"YES\n"; return;
   }
  for(int i=n-1;i>=0;i--){
      l+=k[i];
      if(alt(l,k.substr(0,i))){
         cout<<"YES\n"; return;
      }
    // cout<<k.substr(0,i+1)<<" "<<l<<endl;
  }
  l = s, k = t;
  //cout<<k<<":\n";
  for(int i=m-1;i>=0;i--){
      l+=k[i];
      if(alt(l,k.substr(0,i))){
         cout<<"YES\n"; return;
      }

      //cout<<k.substr(0,i)<<" "<<l<<endl;
  }
  cout<<"NO\n";
}


int32_t main(){
   fast_io
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}