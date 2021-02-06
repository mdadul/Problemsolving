#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m>>n;
	vector<vector<int>>v;
	for(int i=0;i<m;i++){
		vector<int> v1;
		for(int j=0;j<n;j++){
			int x;
			cin>>x;
			v1.push_back(x);
		}
		v.push_back(v1);
	}
	for(int i=0;i<m;i++){
		for(int j=n-1;j>=0;j--){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}