#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	int i=1;
	while(tc--) {
	    int n;
	    cin>>n;

	    int c = sqrt(n)+1;
	    int d = ceil(((c-1)*(c-1)+(c*c))/2)+1;
	    cout<<d<<"\n";
	    if(d%2==1){
	    	if(d==n){
	    		cout<<"equl eual"<<"\n";
	    		cout<<"Case "<<i<<": "<<c<<" "<<c<<"\n";
	    	}
	    	else if(d<n){
	    		cout<<"---d<n---"<<"\n";
	    		cout<<"Case "<<i<<": "<<c-(n-d)<<" "<<c<<"\n";
	    	}
	    	else if(d>n){
	    		cout<<"---d>n---"<<"\n";
	    		cout<<"Case "<<i<<": "<<c<<" "<<c-(d-n)<<"\n";
	    	}

	    }
	    else{
	    	if(d==n){
	    		cout<<"equl eual"<<"\n";
	    		cout<<"Case "<<i<<": "<<c<<" "<<c<<"\n";
	    	}
	    	else if(d<n){
	    		cout<<"---d<n---"<<"\n";
	    		cout<<"Case "<<i<<": "<<c<<" "<<c-(n-d)<<"\n";
	    	}
	    	else if(d>n){
	    		cout<<"---d>n---"<<"\n";
	    		cout<<"Case "<<i<<": "<<c-(d-n)<<" "<<c<<"\n";
	    	}

	    }
	    i++;
	}
	return 0;
}