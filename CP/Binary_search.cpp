	///////////////////////////////////////
	///	ITMO ACADEMY					///
	///	BINARY SEARCH PILOT COURSE		///
	///	STEP 1							///
	///	CODE 1							///
	///	VERDIT 	: ACCEPTED				///
	///	Assuit University Community		///
	///	Sheet 3 Array --> Z 			///
	///////////////////////////////////////

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	for(int i=0;i<k;i++){
		int x;
		cin>>x;
		int l=0;
		int r = n-1;
		bool ok = false; 
		while(r>=l) {
		 	int m = (l+r)/2;
		 	if(a[m]==x){
		 		ok = true;
		 		break;
		 	}   
		 	else if(a[m]<x){
		 		l = m+1;
		 	}
		 	else if(a[m]> x){
		 		r = m-1;
		 	}
		}
		if(ok){
		 		cout<<"found"<<"\n";
		 }
		 else cout<<"not found"<<"\n";

	}
	return 0;
}