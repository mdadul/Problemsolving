#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	long long int even =0, odd =0,sum=0;
	if(a<b){
		
		for(int i=a;i<=b;i++){
			sum+=i;
			if(i%2==0)even+=i;
			else odd+=i;
		}
	}
	else{
		for(int i=b;i<=a;i++){
			sum+=i;
			if(i%2==0) even+=i;
			else odd+=i;
		}
	}
	cout<<sum<<"\n"<<even<<"\n"<<odd;

	return 0;
}