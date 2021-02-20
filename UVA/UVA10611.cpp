// Verdict	: Accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n+10];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int Q;
	cin>>Q;
	int qq[Q+10];
	for(int i=0;i<Q;i++){
		cin>>qq[i];
	}

	for(int i=0;i<Q;i++){
		int l = -1;
		int r = n;

		while(r>l+1) {
		    int m =(l+r)/2;

		    if(arr[m]<qq[i]) l = m;
		    else r = m;
		}
		if(arr[l]<qq[i]){
			cout<<arr[l]<<" ";
		}
		else cout<<"X ";

		l=-1;
		r = n;

		while(r>l+1) {
		    int m = (l+r)/2;

		    if(arr[m]>qq[i]){
		    	r = m;
		    }
		    else l = m;
		}
		if(arr[r]>qq[i]){
			cout<<arr[r];
		}
		else cout<<"X";


		cout<<endl;
	}
	return 0;
}