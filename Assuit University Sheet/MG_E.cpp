#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n;
	cin>>n;
	int sum=0,cnt=0;
	for(int i=1;i<n;i++){
		if(sum<n){
			sum+=i;
			cnt++;
			cout<<i<<" ";
		}
		else break;
	}
	cout<<cnt<<"\n";
	return 0;
}