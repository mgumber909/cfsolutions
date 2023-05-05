#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> SieveOfEratosthenes(int n)
{
   
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
       
        if (prime[p] == true)
        {
            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 	vector<int> v;
 	for (int p = 2; p <= n; p++){
        if (prime[p]) v.push_back(p);
 	}
 	return v;
    
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> s=SieveOfEratosthenes(55);
    int n,m,i;
    cin>>n>>m;
    for(i=0;i<s.size();i++){
    	if(s[i]==n&&s[i+1]==m) break;
    }
    if(i<s.size())cout<<"YES";
    else cout<<"NO";
   
	return 0;
}