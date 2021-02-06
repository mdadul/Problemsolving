#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,q;
	cin>>n>>q;
	vector<int> v(n);
	vector<long long int> prefix_sum(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	prefix_sum[0]=v[0];
	for(int i=1;i<n;i++){
		prefix_sum[i] = prefix_sum[i-1]+v[i];
	}
	while(q--){
	    int l,r; 
	    cin>>l>>r;
	    if(l==1) cout<<prefix_sum[r-1]<<endl;
	    else{
	    	l--;
	    	r--;
	    	cout<<prefix_sum[r]-prefix_sum[l-1]<<endl;
	    }
	}
	return 0;
}