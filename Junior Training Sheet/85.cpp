#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n,m,a;
	cin>>n>>m>>a;
	cout<<((m+a-1)/a)*((n+a-1)/a);
	return 0;
}