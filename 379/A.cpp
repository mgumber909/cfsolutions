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
   int a,b;
   cin>>a>>b;
   int c=0,h=0;
   while(a){
    a--;
    h++;
    c++;
    if(c%b==0) a++; 
   }
   cout<<h;
    
} 



int32_t main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   // int t; cin>>t;
   // while(t--)
   solve();
   return 0;
}