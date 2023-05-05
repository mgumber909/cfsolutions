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
#define mod 1000000007
#define inf (1LL<<60)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
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
*/
int small(int n)
{
    if (n % 2 == 0)
        return 2;
 
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}
// void solve(){
//   //int n ;  cin>>n;
//   int a,b; cin>>a>>b;
//   ((a*b) <= 500) && (a<=8) ? cout<<"YES\n":cout<<"NO\n";
// }
void solve(){
   int n; cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   int c=0,s=1;
   sort(v.begin(),v.end());
   if(v[0]!=1) {
    cout<<"NO\n";
    return;
   }
   for(int i=1;i<n;i++){
    if(s>=v[i]) {
        s+=v[i];
    }
    else{
        cout<<"NO\n";
        return;
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