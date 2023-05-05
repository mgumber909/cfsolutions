#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		int c=0;
		vector<int> v; 
		for ( i = 1;i<=3000;i++)
		{
			if(i%3==0||i%10==3); 
			else if(v.size()<=1000) v.push_back(i);
			
		}
		cout<<v[n-1]<<endl;
		
	}
}