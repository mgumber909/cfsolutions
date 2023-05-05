#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define read(x) int x; cin >> x
using namespace std;

#define endl "\n"
#define PI 3.14159265
#define ff first
#define ss second


#define ull unsigned long long 

int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
/*
Ideas
*/
void preprocess_blocks(vector<int>&arr, vector<int>& block)
{
    int len=block.size();
    
    for(int i=0;i<arr.size();i++)
    {
        block[i/len]+=arr[i];
    }
    
}
void solve(){
   int n,m; cin>>n>>m;
   vector<int> arr(n);
   int len= sqrt(n)+1;  
   vector<int> block(len);
   int s=0;
   for(int i=0;i<n;i++){
      cin>>arr[i];
      s+=arr[i];
   }
   preprocess_blocks(arr, block);
   while(m--){
      int l,r,k;
      cin>>l>>r>>k;
        l--;
        r--;
        int sum=0;
        for(int i=l;i<=r;)
        {   
            if(i%len==0 && i+len-1<=r)
            {
                sum+= block[i/len];
                i+=len;
            }
            else
            {
                sum+=arr[i];
                i++;
            }
        }
        //cout<<sum;
        if(((s-sum)+((r-l+1)*k))%2==1) cout<<"YES\n";
        else cout<<"NO\n";
   }
}


int32_t main(){
   fast_io
   int t; cin>>t;
   while(t--)
   solve();
   return 0;
}