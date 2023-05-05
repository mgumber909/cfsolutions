#include "bits/stdc++.h"
using namespace std;
#define nl cout<<"\n";
#define int long long 
#define pi 3.14159265
#define mod 1000000007;
int power(int x, int y, int p)
{
    int res = 1;   
 
    x = x % p;
               
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
 
       
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
void solve(){
	int n; cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	int count=0,s=0;
	sort(a,a+n,greater<int>());
	for(int i=0;i<n;i++){
		s+=a[i];
		sum-=a[i];
		count++;
		if(s>sum) break;
	}
	cout<<count;
nl
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin>>t;
    // while(t--){
       solve();
    // }
    return 0;
}