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

bool valid(string s){
   if(s=="and"||s=="not"||s=="the"||s=="that"||s=="you")
   {
   return true;
   }
   return false;
}
void solve(){
   int n; cin>>n;
   vector<int> a(n),b(n);
   for(int i=n-1;i>=0;i--){
      cin>>a[i];
   }
   for(int i=n-1;i>=0;i--){
      cin>>b[i];
   }
   int ma=a[0],mb=b[0];
   int f=0;
   for(int i=1;i<n;i++){
     if(a[i]>ma&&b[i]>ma) f=1; 
     else if(a[i]>ma&&b[i]<=ma) swap(b[i],a[i]); 
   }
   if(f){cout<<"No\n"; return;}
   for(int i=1;i<n;i++){
     if(b[i]>mb&&a[i]>mb) f=1;
     else if(b[i]>mb&&a[i]<=mb&&b[i]>ma) f=1; 
     else if(b[i]>mb&&a[i]<=mb&&b[i]<ma) swap(b[i],a[i]); 

   }
   if(f){cout<<"No\n"; return;}
   cout<<"YES\n";
   

}
int32_t main(){
   fast_io
   int t; cin>>t; 
   while(t--)
   solve();

   return 0;
}