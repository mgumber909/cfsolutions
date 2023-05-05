#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define mod 1000000007;

int isVowel(char ch)
{
    return (0x208222 >> (ch & 0x1f)) & 1;
}
 
void solve(){
	int s,n;
	cin>>s>>n;
	pair<int,int> pi[n];
	for(int i=0;i<n;i++){
		cin>>pi[i].first>>pi[i].second;
	}
	sort(pi,pi+n);
	bool win=true;
	for(int i=0;i<n;i++){
		if(s<=pi[i].first) {
			win=false;
			break;
		}
		s+=pi[i].second;
	}
	(win)? cout<<"YES":cout<<"NO";
}

int32_t main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //  int t; cin>>t;
    //  while(t--){
    //  }
       solve();
    return 0;
}