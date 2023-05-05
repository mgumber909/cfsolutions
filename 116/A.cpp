#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
 	int t;
 	cin>>t;
 	int max=0,cur=0;
 	while(t--){
 		int a,b;
 		cin>>a>>b;
 		cur=(cur-a)+b;
 		if(max<cur){
 			max=cur;
 		}

 	}   
 	cout<<max;
	return 0;
}