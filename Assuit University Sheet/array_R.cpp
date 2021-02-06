//ac
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>a(n),b(n);
	for(int i = 0; i< n;i++) cin>>a[i];
	for(int i = 0; i< n;i++) cin>>b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int flag =0;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			//cout<<a[i]<<" "<<b[i];
			flag = 1;
			break;
		}
	}	
	if(flag == 0) cout<<"yes";
	else cout<<"no";
	return 0;
}