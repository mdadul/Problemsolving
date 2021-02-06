#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,c;
	cin>>a>>b>>c;

	if(a>b && c==0) cout<<"Takahashi"<<"\n";
	else if(a==b && c==0) cout<<"Aoki";
	else if(a== b && c==1) cout<<"Takahashi";
	else if(a<b && c==1) cout<<"Aoki";
	else if(a>b && c==1) cout<<"Takahashi";
	else if(a<b && c==0) cout<<"Aoki";
	return 0;
}
