#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    map<char,int> mp;
    for (int i = 0; i < s.length(); ++i)
    {
    	mp[s[i]]++;
    }

    for (int i = 0; i < s.length(); ++i)
    {
    	if(mp[s[i]]>1) mp.erase(s[i]);
    }
    if(mp.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    
	return 0;
}