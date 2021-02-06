#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--){
		long long int n;
		cin>>n;
	    unsigned sq = (int)sqrt(n);
	    if(sq*sq==n){
	    	cout<<"yes"<<"\n";
	    }
	    else cout<<"no"<<"\n";
	}
	return 0;
}