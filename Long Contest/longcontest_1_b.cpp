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
	int arr[n+5];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int sum=0;
	for(int i=0;i<n-1;i+=2){
		sum += abs(arr[i]-arr[i+1]);
	}
	cout<<sum;
	return 0;
}