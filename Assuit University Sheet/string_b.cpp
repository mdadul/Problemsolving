//accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]==92) break;
		else cout<<s[i];
	}
	return 0;
}