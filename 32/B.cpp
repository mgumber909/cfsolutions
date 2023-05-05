#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='-'&&s[i+1]=='-'){
            ans+="2";
            i++;
        }
        else if(s[i]=='-'&&s[i+1]=='.') {
            ans+="1";
            i++;
        }
        else if(s[i]=='.') ans+="0";

    }
    cout<<ans;
	return 0;
}