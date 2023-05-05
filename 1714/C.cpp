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

int sumofdigit(int n){
  string s=to_string(n);
  map<char,int> mp;
  int total=0;
  for(int i=0;i<s.length();i++){
    mp[s[i]]++;
    if(mp[s[i]]>=2) {
      return -1;
    }
    total+=(s[i]-'0');
  }
  return total;
}
void solve(){
  int n;
  cin>>n;
  int total=0;
  string s="";
  for(char i='9';i>='1';i--){
    if(total+(i-'0')<=n){
    total+=(i-'0');
    s+=i;
    } 
  }
  sort(s.begin(), s.end());
  cout<<s<<endl;

  

}

int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}