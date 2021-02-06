//Accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int isPrime(long long int a)
{
	if (a <= 1)
	{
		return 0;
	}
	for (long long int i = 2; i *i<=a; i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main(int argc, char const *argv[])
{
	long long int n;
	cin>>n;
	if(isPrime(n)) cout<<"YES";
	else cout<<"NO";
	return 0;
}