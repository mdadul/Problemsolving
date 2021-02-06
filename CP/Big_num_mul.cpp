#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int>a;
	int m,carry;
	string s;
	cin>>s>>m;

	for(auto x : s){
		a.push_back(x-'0');
	}
	reverse(a.begin(), a.end());

	carry = 0;
	for(auto &x: a){
		int r = x*m+carry;
		carry = r/10;
		x = x%10;
	}

	while(carry) {
	    a.push_back(carry%10);
	    carry /=10;
	}
	reverse(a.begin(), a.end());
	for(auto x : a){
		cout<<x;
	}
	return 0;
}
