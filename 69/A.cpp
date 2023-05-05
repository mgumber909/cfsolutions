#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int fx,fy,fz;
    fx=fy=fz=0;
    while(n--){
    	int x,y,z;
    	cin>>x>>y>>z;
    	fx+=x; fy+=y;fz+=z;
    }
    if(fx==fy&&fy==fz&&fz==0)cout<<"YES"; else cout<<"NO";
	return 0;
}