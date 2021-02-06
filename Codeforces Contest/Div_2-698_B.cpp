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
	    int arr[n+10];
	    int cnt[110]={0};
	    for(int i=0;i<n;i++){
	    	cin>>arr[i];
	    	cnt[arr[i]]++;
	    }
	    int m=-1;
	    for(int i=0;i<100;i++){
	    	m = max(m,cnt[i]);
	    }
	    cout<<m<<"\n";
	}
	return 0;
}