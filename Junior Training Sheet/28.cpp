#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	char point = 'a';
	int sum=0,mn=0;
	for(int i=0;i<s.size();i++){

		int diff = abs((int)(point - s[i]));
		mn = min(diff,26-diff);
		point = s[i]; 
		sum+=mn;
	}

	cout<<sum;
	return 0;
}