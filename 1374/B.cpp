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
*/
void solve(){
  int n; cin>>n;
  int c=0,s=0;
  
  while(n%3==0){
   n/=3;
   c++;
  }
  while(n%2==0) n/=2,s++;
   
  if(s<=c&&n==1) cout<<c+(c-s);
  else cout<<-1;
  cout<<endl; 
 // cout<<c<<" "<<s<<endl;
  

}


int32_t main(){
   fast_io
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}