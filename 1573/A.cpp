    #include <bits/stdc++.h>
    using namespace std;
    map<char,int> mp;
    
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string s;
            cin>>s;
            int step=0;
            for(int i=0;i<n;i++){
                if(s[i]=='0') continue;
                if(i!=n-1) step++;
                step+=(s[i]-'0');
            }
            cout<<step<<endl;
        }
        return 0;
    }