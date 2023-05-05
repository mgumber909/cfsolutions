#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
 	int t;
 	cin>>t;
 	while(t--){
 		string n;
 		cin>>n;
 		int l=n.length();
 		if(l<=10) cout<<n<<endl;
 		else cout<<n[0]<<l-2<<n[l-1]<<endl;
 	}   
	return 0;
}