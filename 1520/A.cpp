#include<iostream>
#include<string>
#include <vector>
#include <utility>
#include <algorithm>
#define pci pair<char,int>
#define pb push_back
#define endl "\n"
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int s;
		cin>>s;
		string c;
		cin>>c;
		bool found=false;
		vector<pci> a;
		for (int i = 0; i < c.length(); ++i)
		{	
			a.pb(make_pair(c[i],i));
		}
		sort(a.begin(),a.end());
		for (int i = 0; i < a.size(); ++i)
		{
			if(a[i].first==a[i-1].first&&a[i].second-a[i-1].second!=1)
			{
				found=true;
				cout<<"NO"<<endl;
				break;
			}
		}
		if (!found)
		{
			cout<<"YES"<<endl;
		}

	}
	return 0;
}