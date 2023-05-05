#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    float t;
    cin>>t;
    vector<pair<int,int>> v;
    int ro,lo;
    ro=lo=0;
    for (int i = 0; i < t; ++i)
    {
    	int x,y;
    	cin>>x>>y;
    	if(x==0) ro++;
    	
    	if(y==0) lo++;
    	
    }

    int ans=0;

    if(ro>=ceil(t/2)) ans+=(t-ro);
    else ans+=ro;
   	if(lo>=ceil(t/2)) ans+=(t-lo);
    else ans+=(lo);

    cout<<ans;
	return 0;
}