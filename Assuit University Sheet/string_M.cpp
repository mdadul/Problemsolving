//accepted
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	string a = "hello";
	int cnt=0,pos=-1;
	for(int i=0;i<5;i++){
		for(int j=0;j<s.size();j++){
			if(a[i]==s[j]){
				if(pos<j){
					pos = j;
					cnt++;
					break;
				}
			}
		}
	}
	if(cnt==5) cout<<"YES";
	else cout<<"NO";
	return 0;
}