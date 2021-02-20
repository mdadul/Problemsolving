//Accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct A
{
	int pro,time;
};
bool comp(A x, A y){
	return (x.pro>y.pro || x.pro==y.pro  && x.time<y.time);
}
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	vector<A>a(n);
	for(auto &x:a){
		cin>>x.pro>>x.time;
	}
	sort(a.begin(), a.end(),comp);
	A temp;
	temp.pro = a[k-1].pro;
	temp.time = a[k-1].time;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(temp.pro== a[i].pro && temp.time == a[i].time)cnt++;
	}
	cout<<cnt;
	return 0;
}