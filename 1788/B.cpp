    #include<bits/stdc++.h>
    using namespace std;
    #pragma GCC optimize("Ofast")
    int sd(int x){
    	int ans=0;while(x)ans+=x%10,x/=10;
    	return ans;
    }
    mt19937 rnd;
    void work(){
    	int n;scanf("%d",&n);
    	while(1){
    		int x=rnd()%n,y=n-x;
    		if(abs(sd(x)-sd(y))<=1){
    			printf("%d %d\n",x,y);return;
    		}
    	}
    }
    int main(){
    	rnd.seed(time(0));
    	int t;scanf("%d",&t);
    	while(t--)work();
    	return 0;
    }