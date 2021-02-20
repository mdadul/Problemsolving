// Verdict 	: Accepted
// Problem	: Codeforce EDU STEP 1 D

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
	sort(arr,arr+n);
	int k;
	cin>>k;
	while(k--) {
	    int l,r;
	    cin>>l>>r;
	    int a,b;
	    a = -1;
	    b =n;
	    while(a<b-1){
	    	int m = (a+b)/2;
	    	if(arr[m]>=l){
	    		b = m;
	    	}
	    	else{
	    		a = m;
	    	}
	    }
	    int lower = a+1;
	    a = -1;
	    b = n;
	    while(a<b-1){
	    	int m = (a+b)/2;
	    	if(arr[m]>r){
	    		b = m;
	    	}
	    	else{
	    		a = m;
	    	}
	    }
	    int upper = b;
	    int ans = abs(lower-upper);
	    cout<<ans<<" ";
	}
	return 0;
}