#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#define ll long long
using namespace std;
ll n,k;
bool ok(ll v){
	for(int i=1;;i++){
		int m = pow(k,i);
		if(v/m<=0) break;
		v+=(v/m);
		// cout<<k<<" ";
	}
	return v>=n;
}
int main(int argc, char const *argv[])
{
	cin>>n>>k;
	ll l = -1, r = 1;
	while(!ok(r)) r*=2;
	while(l<r-1) {
	 	ll m = l+(r-l)/2;
	 	if(ok(m)) r =m;
	 	else l = m;
	}
	cout<<r<<endl;
	return 0;
}