//Accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>x(n),y(n);
	int r=0;
	for(int i=0;i<n;i++) {
	    cin>>x[i]>>y[i];
	    if(x[i]!=y[i]) r++;
	}
	if(r>0) cout<<"rated"<<"\n";
	else{
		int un=0;
		for(int i=1;i<n;i++){
			if(x[i]>x[i-1]) un++;
		}
		if(un!=0) cout<<"unrated"<<"\n";
		else cout<<"maybe"<<"\n";
	}
	return 0;
}