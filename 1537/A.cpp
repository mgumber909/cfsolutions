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
    	for(int i=0;i<n;i++)
    	{
    		int temp;
    		cin>>temp;
    		v.push_back(temp);
    	}
    	ll s=0;
    	for (int i = 0; i < v.size(); ++i)
    	{
    		s+=v[i];
    	}
    	if (s>=n) cout<<s-n<<endl;
    	else cout<<1<<endl;
    	    }

	return 0;
}