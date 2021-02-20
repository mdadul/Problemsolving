#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int i,r,d=0,b;
	string a;
	char ch;
	while(cin>>a>>ch>>b) {
		r=0,d=0;
	    if(ch=='/'){
	    	int flag=0;
	    	for(i=0;i<(int)a.size();i++){
	    		d = d*10+(a[i]-'0');
	    		if(d<b && !flag) continue;
	    		else{
	    			cout<<d/b;
	    			flag=1;
	    		}
	    		d = d%b;
	    	}
	    	cout<<endl;
	    }
	    else {
	    	for(i=0;i<(int)a.size();i++){
	    		r = ((r*10)+(a[i]-'0'))%b;
	    	}
	    	cout<<r<<"\n";
	    }
	    
	}
	return 0;
}