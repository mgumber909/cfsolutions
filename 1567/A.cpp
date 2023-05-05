#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string t;
		cin>>t;
		string ans="";
		for(int i=0;i<n;i++){
			if(t[i]=='L') ans+='L';
			if(t[i]=='R') ans+='R';
			if(t[i]=='U') ans+='D';
			if(t[i]=='D') ans+='U';
		}
		cout<<ans<<endl;

	}
	
	return 0;
}