//Accepted
//		Author:  Emdadul Islam
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	vector<string>s(tc);
	for(auto &x:s){
		cin>>x;
	}
	int count[tc+2]={0};
	int p=0;
	vector<string>ans(10);
	for(int i=0;i<tc;i++){
		for(int j=0;j<tc;j++){
			if(s[i]==s[j]){
				count[i]++;
			}
		}
	}
	int mx=-1,as=0;
	for(int i=0;i<tc;i++){
		if(mx<count[i]){
			mx = count[i];
			as=i;
		}
	}
	cout<<s[as];
	return 0;
}
/*
3
QCCYXL
QCCYXL
AXGLFQDD
*/