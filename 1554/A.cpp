#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int> v;
    	for (int i = 0; i < n; ++i)
    	{
    		int tmp;
    		cin>>tmp;
    		v.push_back(tmp);
    	}
    	vector<ll> v1;
    	for (int i = 0; i < n-1; ++i)
    	{
    		v1.push_back(1LL*v[i]*v[i+1]);
    	}
 		sort(v1.begin(), v1.end());
 		cout<<v1[v1.size()-1]<<endl;
    	
    }
	return 0;
}