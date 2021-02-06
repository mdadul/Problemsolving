//Accepted
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
	    vector<int>v(n);
        for (int i = 0; i < n; ++i)
        {
        	cin>>v[i];
        }
        int sum=0,mn=20000000;
        for (int i = 0; i < n; ++i)
        {
        	for (int j = i+1; j < n; ++j)
        	{
        		sum = v[i]+v[j]+j-i;
        		if(sum<mn) mn = sum;
        	}
        }
        cout<<mn<<endl;
	}
	return 0;
}