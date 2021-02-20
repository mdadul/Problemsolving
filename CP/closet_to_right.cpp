// Verdict	: Accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<k;i++){
		int x;
		cin>>x;
		
		int l =-1;	// a[l] <x
		int r =n;	// a[r] >=x

		while(r>l+1) {
		    int m = (l+r)/2;
		    if(a[m] < x){
		    	l = m;
		    }
		    else{
		    	r = m;
		    }
		}
		if(r < x && a[r]>=x){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}