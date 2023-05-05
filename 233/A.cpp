#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin>>n;
    std::vector<int> v;
    for(int i=1;i<=n;i++) v.push_back(i);
    if(n%2!=0||n==1) cout<<-1;
	else {
		for (int i = 0; i <=n; ++i)
		{
			v[i]=v[i+1];
			v[i+1]=i+1;
			i++;
		}
		for (int i = 0; i < n; ++i)
		{
			cout<<v[i]<<" ";
		}
	}
	return 0;
}