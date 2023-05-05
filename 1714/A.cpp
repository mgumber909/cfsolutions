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
#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define pi 3.14159265
#define mod 1000000007
#define int long long
#define pb push_back
#define ff first
#define ss second

void solve(){
  int n,h,m;
  cin>>n>>h>>m;
  int k=0;
  int ansi=0,ansj=0;
  vector<pair<int,int>> v;
  for(int i=0;i<n;i++){
    int hi,mi;
    cin>>hi>>mi;
    if(hi==h&&mi==m){
      k=0;
    }
    if(hi<h||(hi<=h&&mi<m)){
      hi+=24;
    }
    v.pb({hi,mi});
  }
  sort(v.begin(), v.end());
  for(int i=0;i<n;i++){
    if(v[i].ff>=h){
      int j=v[i].ff-h;
      int k=v[i].ss-m;
      if(k<0){
        k=(60+k);
        j--;
      }
      cout<<j<<" "<<k<<endl;
      break;
    }
  }
  

}

int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}