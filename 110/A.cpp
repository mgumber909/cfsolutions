#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int c=0;
    for (int i = 0; i < s.length(); ++i)
    {
    	if(s[i]=='4'||s[i]=='7') c++;
    }
    if(c==7||c==4) cout<<"YES" ;
    else cout<<"NO";
	return 0;
}