#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
 	string s;
 	cin>>s;
 	vector<char> v;
 	for (int i = 0; i <s.length(); ++i)
 	    {
 	    	if(s[i]>'0'&&s[i]<='9') v.push_back(s[i]);
 	    }    
 	  sort(v.begin(), v.end());
 	  for (int i = 0; i < v.size()-1; ++i)
 	  {
 	  	cout<<v[i]<<"+";
 	  }
 	  cout<<v[v.size()-1];
 	  	return 0;
}