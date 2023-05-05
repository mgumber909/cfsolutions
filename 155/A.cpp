#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    int tmp;
   	vector<int> v;
    while(t--) { cin>>tmp; v.push_back(tmp);}
    int c=0,max=v[0],min=v[0];
    for (int i = 1; i < v.size(); ++i)
    {
    		if(v[i]<min) {
    			min=v[i];
    			c++;
    		}
    		else if(v[i]>max) {
    			max=v[i];
    			c++;
    		}
    }
	cout<<c;
	return 0;
}