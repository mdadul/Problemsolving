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
	for(int i=0;i<s.size();i++){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
			if(flag==1){
				flag=0;
				cout<<" ";
			}
			i+=2;
			continue;
		}
		else cout<<s[i];flag=1;
	}
	return 0;
}