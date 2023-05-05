#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    char c=s[0];
    
    int r=0;
    for (int i = 1; i < n; ++i)
    {
    	if(c==s[i]) r++;
    	else c=s[i];
    }
    cout<<r;
	return 0;
}