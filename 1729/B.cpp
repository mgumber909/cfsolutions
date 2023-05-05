#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define pi 3.14159265
#define mod 1000000007
#define int long long
#define pb push_back


void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++){
    string t ="";
    t += s[i];
    if(s[i+2]=='0'&&s[i+3]=='0'&&i+2<s.length()){}
    else if(s[i+2]=='0'&&i+2<s.length()){
      t+=s[i+1];
      i+=2;
    }
    int k = stoi(t);
    cout<<char(96+k);

  }
  cout<<endl;
  
} 

int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}