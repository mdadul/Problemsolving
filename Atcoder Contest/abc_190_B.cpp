#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,s,d;
	cin>>n>>s>>d;
	int X[n+5],Y[n+5];
	int flag=0;
	for(int i=0;i<n;i++){
		cin>>X[i]>>Y[i];
		if(X[i]<s && Y[i]>d){
			flag=1;
		}
	}
	if(flag==1) cout<<"Yes";
	else cout<<"No";
	return 0;
}
