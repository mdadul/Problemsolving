#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	while(tc--) {
	    int n;
	    cin>>n;
	    long long int sum=0;
	    for(int i=1;i<=n;i++){
	    	sum+=(n/i)*i;
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}