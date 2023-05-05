#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    string s3="";
    for (int i = 0; i < s1.length(); ++i)
    {
    	if(s1[i]!=s2[i]) s3+='1';
    	else s3+='0';
    }
    cout<<s3;
	return 0;
}