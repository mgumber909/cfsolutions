#include "bits/stdc++.h"
using namespace std;
#define endl "\n";
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
     string s;
     cin>>s;
     char min=s[0];
     int pos=0;
     for(int i=1;i<s.length();i++){
     	if(min>=s[i]){
     		min=s[i];
     		pos=i;
     	}
     }

     cout<<min<<" ";
     int c=0;
     for(int i=0;i<s.length();i++){
     	if(i==pos) continue;
        cout<<s[i];
     }
     cout<<endl;
    }
    return 0;
}