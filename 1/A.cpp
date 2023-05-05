#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a,m,n;
    cin>>m>>n>>a;
    cout<<1LL*((m+a-1)/a)*((n+a-1)/a);
	return 0;
}