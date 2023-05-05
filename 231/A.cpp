#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int count=0;
    while(n--){
    	int a,b,c;
    	cin>>a>>b>>c;
    	if(a==1&&b==1||a==1&&c==1||c==1&&b==1||a==1&&b==1&&c==1)
    		count++;
    }
    cout<<count<<endl;
	return 0;
}