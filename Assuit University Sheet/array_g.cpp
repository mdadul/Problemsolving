//Accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int> v,r(n);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	r=v;
	reverse(v.begin(),v.end());
	if(r==v) cout<<"YES";
	else cout<<"NO";

	return 0;
}