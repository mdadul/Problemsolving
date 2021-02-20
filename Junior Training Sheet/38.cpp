// Verdict		: Accepted
// Problem		: Junior Training Sheet 38 no row.
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,k,d;
	cin>>n>>t>>k>>d;
	int tm,tm2;
	tm = ((n+k-1)/k)*t;
	tm2 = d+t;
	if(tm>tm2) cout<<"YES"<<"\n";
	else cout<<"NO"<<"\n";
	return 0;
}
