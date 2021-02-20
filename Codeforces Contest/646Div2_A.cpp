#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;

	while(tc--) {
	    int n,x;
	    cin>>n>>x;

	    int cost[n+5];
	    int odd=0,even=0;
	    for(int i=0;i<n;i++){
	    	cin>>cost[i];
	    	if(cost[i]%2==1) odd++;
	    	else even++;
	    }
	    if(x<=odd){
	    	if(x%2==1) cout<<"YES";
	    }
	    else if(odd%2==1) cout << "YES";
	    else if(even%2==1 && odd%2==0) cout<<"YES"; 
	    else cout<< "NO";
	    cout<<endl;
	}
	return 0;
}
