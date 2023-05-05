#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define PI 3.14159265
#define mod 1000000007
#define int long long
#define pb push_back
#define ff first
#define ss second


void solve(){
    int s;
    cin>>s;
    string s1[s],s2[s],s3[s];
    int num[3];
    map<string,int> mp1,mp2,mp3;
    for(int i=0;i<s;i++){cin>>s1[i]; mp1[s1[i]]++;}
    for(int i=0;i<s;i++){cin>>s2[i]; mp2[s2[i]]++;}
    for(int i=0;i<s;i++){cin>>s3[i]; mp3[s3[i]]++;}
    int a,b,c;
    a=b=c=0;
    for(int i=0;i<s;i++){

      if(mp2[s1[i]]>=1&&mp3[s1[i]]>=1) a=a;
      else if(mp2[s1[i]]==0&&mp3[s1[i]]==0){
        a+=3;
      }else if(mp2[s1[i]]==0&&mp3[s1[i]]!=0){
        a++;
        c++;
      }else if(mp2[s1[i]]!=0&&mp3[s1[i]]==0){
        a++;
        b++;
      }

      if(mp1[s2[i]]>=1&&mp3[s2[i]]>=1) b=b;
      else if(mp1[s2[i]]==0&&mp3[s2[i]]==0){
        b+=3;
      }else if(mp1[s2[i]]==0&&mp3[s2[i]]!=0){
        b++;
        c++;
      }

      if(mp2[s3[i]]>=1&&mp1[s3[i]]>=1) c=c;
      else if(mp2[s3[i]]==0&&mp1[s3[i]]==0){
        c+=3;
      }
    }
    cout<<a<<" "<<b<<" "<<c;
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