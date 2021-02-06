#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int flag=0;
	if(islower(s[0])){
		flag=1;
		cout<<(char)toupper(s[0]);
	}
	else{
		flag=0;
		cout<<s;
	}
	for(int i=1;i<s.size();i++){
		if(flag){
			cout<<(char)tolower(s[i]);
		}
		else break;
	}
	
	return 0;
}