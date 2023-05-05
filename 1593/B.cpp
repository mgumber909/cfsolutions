#include "bits/stdc++.h"
using namespace std;
#define ll long long
void solve(){
    string s;
    cin>>s;
    char fe='a';
    int count=0,i,count1=0;

    for(i=s.length()-1;i>=0;i--){
        if(s[i]=='0'){
            fe=s[i];
            i--;
            break;
        }
        count++;
    }
    for(;i>=0;i--){
        
    if(fe=='0'&&(s[i]=='5'||s[i]=='0')) break;
    count++;
        
    }
    for(i=s.length()-1;i>=0;i--){
        if(s[i]=='5'){
            fe=s[i];
            i--;
            break;
        }
        count1++;
    }
    for(;i>=0;i--){
        
        if(fe=='5'&&(s[i]=='2'||s[i]=='7')) break;
        count1++;
        
    }
    

    if(count==s.length()-1) count--;
    cout<<min(count,count1)<<endl;
 }

int main(){

            int t; cin>>t;
            while(t--){
                solve();
            }
           
    return 0;
}