#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
    	for(int i=0;i<n-1;i++){
    		if(s[i]=='B'&&s[i+1]=='G')
    		{
    			s[i]='G';
    			s[i+1]='B';
    			i++;
    		}
    	}
    }
    cout<<s;
	return 0;
}