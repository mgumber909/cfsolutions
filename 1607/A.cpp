#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	map<char,int> mp;
	for(int i=1;i<=26;i++){
		char h; cin>>h;
		mp[h]=i;
	}
	string s; cin>>s;

	int count=0;
	for(int i=1;i<s.length();i++){
		count+=abs(mp[s[i]]-mp[s[i-1]]);
	}
	cout<<count<<endl;
}
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	 int t; cin>>t;
	 while(t--) 
	solve();
		
	}