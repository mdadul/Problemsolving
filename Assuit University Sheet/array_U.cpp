//Accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m>>n;
	vector<int>a(m),b(n);
	for(int i=0;i<m;i++) cin>>a[i];
	for(int j=0;j<n;j++) cin>>b[j];
	int j=0;
	for(int i=0;i<m;i++){
		if(a[i]==b[j]) j++;
	}
	if(j>=n) cout<<"YES";
	else cout<<"NO";
	return 0;
}
