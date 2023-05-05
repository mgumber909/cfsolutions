#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int n=s.length();
    int u=0,l=0;
    for (int i = 0; i < n; ++i)
    {
    	if(s[i]>=97&&s[i]<=122) l++;
    	else u++;
    }
    if(u>l )transform(s.begin(), s.end(), s.begin(), ::toupper);
    else  transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s;
    //cout<<1;
	return 0;
}