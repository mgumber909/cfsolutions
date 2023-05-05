#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
 	int n;
 	cin>>n;
 	for (int i = 0; i < n; ++i)
 	   {
 	   	
 	   	int k;
 	   	cin>>k;
 	   	int x=k%3;
		 	   	if(k%3==0) cout<<k/3<<" "<<k/3<<endl;
 	   		else{
 	   				int z=k-(k/3);
 	   				 //cout<<k-z<<endl;
 	   				if(z%2==0) cout<<k/3<<" "<<(k/3)+1<<endl;
 	   				else cout<<(k/3)+1<<" "<<(k/3)<<endl;
 	   			}
 	   }   
	return 0;
}