// Verdict	: Accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#define ll long long
using namespace std;
ll n,w,h;
bool ok(ll x){
	return (x/h)*(x/w) >=n;
}
int main(int argc, char const *argv[])
{
	
	cin>>w>>h>>n;
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