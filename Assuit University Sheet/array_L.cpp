//accepted
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
	    int max;
	    for (int k = 1; k <= n; ++k)
	    {
	    	for (int p = 0; p <= n-k; ++p)
	    	{
	    		max = v[p];
	    		for (int i = p; i < p+k; ++i)
	    		{
	    			if(max<v[i]){
	    				max = v[i];
	    			}
	    		}
	    		cout<<max<<" ";
	    	}
	    }
	    cout<<endl;
	}

	return 0;
}