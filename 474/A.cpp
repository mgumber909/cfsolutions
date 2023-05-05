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
  map<char,char> L;
  map<char,char> R;
  string a="qwertyuiop";
  for(int i=0;i<a.length()-1;i++){
    R[a[i]]=a[i+1];
  }
  for(int i=1;i<a.length();i++){
    L[a[i]]=a[i-1];
  }
  a="asdfghjkl;";
  for(int i=0;i<a.length()-1;i++){
    R[a[i]]=a[i+1];
  }
  for(int i=1;i<a.length();i++){
    L[a[i]]=a[i-1];
  }
  a="zxcvbnm,./";
  for(int i=0;i<a.length()-1;i++){
    R[a[i]]=a[i+1];
  }
  for(int i=1;i<a.length();i++){
    L[a[i]]=a[i-1];
  }
  char s;
  cin>>s;
  string p;
  cin>>p;
  if(s=='R'){
    for(int i=0;i<p.length();i++) cout<<L[p[i]];
  }else{
    for(int i=0;i<p.length();i++) cout<<R[p[i]];
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