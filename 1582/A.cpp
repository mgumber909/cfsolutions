#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	ll a,b,c;
	while(t--){
		
			cin>>a>>b>>c;
			ll total=a+(b*2)+(c*3);
			if(total%2==0) cout<<0;
			else cout<<1;
			cout<<endl;

		}
	}