#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n,m,temp=0;
	ll a[26]={0};
	ll sum=0;
	cin>>n>>m;
	char c;
	for (int i = 0; i < n; ++i)
	{
		cin>>c;
		a[90-c]+=1;
	}
	sort(a,a+26,greater<int>());
	ll count=0;
	for (int i = 0; i < 26; ++i)
	{	
		if(count==m)
			break;
		if(count+a[i]>m)
		{
			sum+=(m-count)*(m-count);
			break;
		}
		sum+=a[i]*a[i];
		count=count+a[i];
	}
	cout<<sum;
	return 0;
 
}