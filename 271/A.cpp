#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int i=n+1;
    
    for(;i<=10000;i++){
    	string s=to_string(i);
    	sort(s.begin(),s.end());
    	int a=s[0]-'0',b=s[1]-'0',c=s[2]-'0',d=s[3]-'0';
    	if(a!=b&&b!=c&&c!=d){
    		cout<<i;
            break;
    	
    	}
    }
	return 0;
}