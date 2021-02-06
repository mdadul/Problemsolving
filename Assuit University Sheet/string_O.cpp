#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt[26]={0};
	for(int i=0;i<s.size();i++){
		cnt[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		for(int j=0;j<cnt[i];j++){
			cout<<(char)('a'+i);
		}
	}
	return 0;
}