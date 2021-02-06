//accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	int count=0,flag=0;
	while(1) {
	    for(int i=0;i<n;i++){
	    	if(v[i]%2==0){
	    		v[i]/=2;
	    	}
	    	else{
	    		flag =1;
	    		break;
	    	}
	    }
	    if(flag==1) break;
	    else count++;
	}
	cout<<count;
	return 0;
}