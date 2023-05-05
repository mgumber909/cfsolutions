#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int s;
    cin>>s;
    if(s%2==0) cout<<0;
    else{
    	string so;
    	so=to_string(s);
    	if((so[0]-'0')%2==0)
    		cout<<1;
    	else{
    		bool ans=false;
    		for(int i=0;i<so.length();i++)
    		{
    			if((so[i]-'0')%2==0) {
    				ans=true;
    				break;
    			}
    		}
    		if(ans) cout<<2;
    		else cout<<-1;
    	}

    }
    cout<<endl;
    
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
   // precompute();
    while(t--){
       solve();
    }
    return 0;
}