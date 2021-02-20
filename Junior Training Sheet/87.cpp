// Verdict	: Accepted
// Problem 	: Junior Training Sheet 87 no row.
// Topic 	: Prime Num.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(int a){
	if(a<=1) return false;
	for(int i=2; i*i<=a;i++){
		if(a%i==0) return false;
	}
	return true;
}
int next_prime(int n){
	for(int i=n+1;i<=n+20;i++){
		if(isPrime(i)) return i;
	}
	return 0;
}
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	if(next_prime(n)==m){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}