#include<iostream>
#include <cmath>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll count=0;
		
		string num = to_string(n);
		if(n<=9){count=n;
			cout<<count<<endl;
			continue;
		}
		else count=9;
		int a=1;
		for (int i = 1; i <num.size(); ++i)
		{
			a+=(pow(10,i));
			for (int j= 1; j < 10; ++j)
			{
				if(a*j<=n)count++;
				else break;
			}
		}
		
		
		cout<<count<<endl;
	}
	return 0;
}