#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
   
    vector<int> v;
    int c=0;
    int tmp;
    for (int i = 0; i < 4; ++i)
    {
    	cin>>tmp;
    	v.push_back(tmp);	 
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < 4; ++i)
    {
    	if(v[i]==v[i-1]) c++;
    }
    cout<<c;
	return 0;
}