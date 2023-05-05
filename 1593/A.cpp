#include "bits/stdc++.h"
using namespace std;
#define ll long long
void solve(){
    int a[3];
    ll max=0;
    int hw=0;
    for(int i=0;i<3;i++){
        cin>>a[i];
        if(a[i]>max){ max=a[i]; }
    }
    for(int i=0;i<3;i++) if(a[i]==max) hw++;
    for(int i=0;i<3;i++){
        if(max==a[i]){
         if(hw>1)
         cout<<1;
            else cout<<0;
        }
        else if(max-a[i]>=0) cout<<max-a[i]+1;
        else cout<<0;
        cout<<" ";
    }
    cout<<endl;
 }

int main(){

            int t; cin>>t;
            while(t--){
                solve();
            }
           
    return 0;
}