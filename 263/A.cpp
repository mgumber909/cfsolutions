#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int i,j;
    for(i=1;i<=5;i++){
    	for(j=1;j<=5;j++)
    		{
    			cin>>n;
    			if(n==1) break;
    		}
    		if(j!=6) break;
    }
    cout<<abs(3-i)+abs(3-j);

	return 0;
}