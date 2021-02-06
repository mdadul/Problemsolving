/*
Bismillahir Rahmanir Rahim

Author	: Emdadul Islam

Custome Sort.
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct A
{
	int idx,i,p;
	string s;
};
bool comp(A x, A y){
	if(x.s == y.s) return x.p>y.p;
	return x.s<y.s;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int i=1;
	vector<A>a(n);
	for(auto &x:a){
		cin>>x.s>>x.p;
		x.idx=i++;
	}
	sort(a.begin(), a.end(),comp);

	for(auto x:a){
		cout<<x.idx<<endl;
	}
	return 0;
}