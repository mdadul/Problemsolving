//URI 1073
//ANSWER	: 	 ACCEPTED
//AUTHOR	:	 EMDADUL ISLAM

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i+=2){
		cout<<i<<"^2"<<" = "<<i*i<<"\n";
	}
	return 0;
}