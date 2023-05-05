#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    float t=n;
    float x,total=0;
    while(n--){
    	cin>>x;
    	total+=x/100;
    }
    cout<<total/t*100;

	return 0;
}