#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
   	string s1,s2,s3,s4;
   	cin>>s1>>s2>>s3;
   	s4=s1+s2;
   	sort(s4.begin(),s4.end());
   	sort(s3.begin(),s3.end());
   	if(s3==s4) cout<<"YES";
   	else cout<<"NO";

	return 0;
}