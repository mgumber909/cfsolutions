#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define mod 1000000007;
#define f first 
#define s second


void solve(){
	int n,m,r,c,k=0;
	cin>>n>>m>>r>>c;
	char a[n+1][m+1];
	vector<pair<int,int>> black;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='B') {
				black.push_back({i,j});
				k++;
			}
		}
	if(black.size()==0) cout<<-1<<endl;
	else{
		bool found=false;
		
		for(auto i:black){
			if(r==i.f&&c==i.s){
				cout<<0<<endl;
				found=true;
				break;
				}
			}
		for(auto i:black){
			if((r==i.f||c==i.s)&&!found){
				cout<<1<<endl;
				found=true;
				break;
				}
			}
	
		if(!found) cout<<2<<endl;

	}

}

int32_t main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
     int t; cin>>t; 
     while(t--)
     solve();
    return 0;
}