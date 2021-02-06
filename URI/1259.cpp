#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &x:v){
		cin>>x;
	}
	vector<int>even,odd;
	for(int i=0;i<n;i++){
		if(v[i]%2==0){
			even.push_back(v[i]);
		}
		else{
			odd.push_back(v[i]);
		}
	}
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());
	reverse(odd.begin(), odd.end());
	for(auto x:even){
		cout<<x<<"\n";
	}
	for(auto x:odd){
		cout<<x<<"\n";
	}
	return 0;
}