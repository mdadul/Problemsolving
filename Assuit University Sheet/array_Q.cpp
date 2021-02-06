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
        for(int i=0; i < n; i++) cin>>v[i];
        int cnt=0;

    	for(int k=0;k<=n;k++){
    		for(int i=k;i<n-1;i++){
    			if(v[i]<v[i+1]){
    				cnt++;
    			}
    			else break;
    		}
    	}
    	cout<<cnt+n<<endl;
	}
	return 0;
}