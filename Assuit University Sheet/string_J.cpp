//accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	vector<int>cnt(26);
	for(int i=0;i<s.size();i++){
		cnt[(int)s[i]-'a']++;
	}
	for(int i=0 ; i<26;i++){
		if(cnt[i]!=0){
			cout<<char(i+'a')<<" : "<<cnt[i]<<endl;
		}
	}
	return 0;
}