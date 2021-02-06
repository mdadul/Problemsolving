//accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<vector<int>>v;
	for(int i=0;i<n;i++){
		vector<int>v1;
		for(int j=0; j<n;j++){
			int x;
			cin>>x;
			v1.push_back(x);
		}
		v.push_back(v1);
	}
	int sum1=0,sum2=0;
	for(int i=0; i< n; i++){
		sum1 += v[i][i];
		sum2 += v[i][n-1-i];
	}
	cout<<abs(sum1-sum2);
	return 0;
}