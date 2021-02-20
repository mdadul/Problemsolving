#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n;
	vector<long long int>v;
	while(cin>>n) {
	    v.push_back(sqrt(n));
	}
	for(int i=v.size()-1;i!=0;i--){
		cout<<fixed<<setprecision(4)<<v[i]<<"\n";
	}
	return 0;
}