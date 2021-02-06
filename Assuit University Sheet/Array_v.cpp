#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m>>n;

	vector<int>v(10e5+10);

	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		v[x]++;
	}
	for (int i = 1; i <= n; ++i)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}