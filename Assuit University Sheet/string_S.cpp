//ACCEPTED

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int l=0,r=0,cnt=0,k=0,p=0;
	int pos[1000]={0};
	for(int i=0;i<s.size();i++){
		if(s[i]=='L') l++;
		if(s[i]=='R') r++;
		if(l==r){
			cnt++;
			pos[k]=i+1;
			k++;
			l=0;
			r=0;
		}
	}
	cout<<cnt<<endl;
	int n=0;
	for(int i=0;i<s.size();i++){
		if(pos[n]==i){
			cout<<endl;
			n++;
		}
		cout<<s[i];
	}
	return 0;
}