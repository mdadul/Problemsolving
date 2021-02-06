#include <bits/stdc++.h>
using namespace std;
#define fasterInOut ios::sync_with_stdio(false); cin.tie(0);

int main(int argc, char const *argv[])
{
	fasterInOut;
	int tc;
	cin>>tc;
	while(tc--) {
	    int n,k;
	    cin>>n>>k;

	    if(n<=k){
	    	cout<<(n+k-1)/n<<"\n";
	    }
	    else{
	    	int p=2,ans=0;
	    	int x =k;
	    	while(1){
	    		x = k*p;
	    		ans=(n+x-1)/n;
	    		if(ans%n==0) break;
	    		else p++;
	    	}
	    	cout<<ans<<"\n";

	    }
	}
	return 0;
}
