// Verdict		: Accepted
// Algorithm 	: Two pointer
// Problem		: Junior Training Sheet 24 no row.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n+10];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int l=0,r=n-1;
	int sereja=0,dima=0;
	int flag=1;
	while(l<=r) {
		if(flag){
			if(arr[l]>arr[r]){
				sereja+=arr[l];
				l++;
			}
			else{
				sereja+=arr[r];
				r--;
			}
			flag = 0;
		}
		else if(flag==0){
			if(arr[l]>arr[r]){
				dima+=arr[l];
				l++;
			}
			else{
				dima += arr[r];
				r--;
			}
			flag =1;
		}
	   
	}
	cout<<sereja<<" "<<dima<<"\n";
	return 0;
}