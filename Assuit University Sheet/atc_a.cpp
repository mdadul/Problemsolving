#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	if(s[0]==s[1] && s[1]==s[2]) cout<<"Won"<<endl;
	else cout<<"Lost";
	return 0;
}
