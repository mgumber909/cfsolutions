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
 string s;
 cin>>s;
 if(s[0]!='-') cout<<s;
 else {
    string p = s.substr(0,s.length()-2)+s[s.length()-1];
    string p1 = s.substr(0,s.length()-1);
    if(min(p,p1)=="-0") cout<<0;
    else cout<<min(p,p1);
 }
}


int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}