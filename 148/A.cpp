#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int c=0;
     for (int i = 1; i <= d; ++i)
     {
     	if(i%k==0||i%l==0||i%n==0||i%m==0) {c++;}
     }
     cout<<c;
	return 0;
}