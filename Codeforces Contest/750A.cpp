// Verdict : Accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;
int n,k;

int ok(int tm){
	int t = abs(240-tm);
	int p=5;
	int cnt=0;
	for(int i=1;i<=n;i++){
		t-=p;
		p=p+5;
		if(t<0) break;
		cnt++;
	}
	return cnt;

}
int main(int argc, char const *argv[])
{
	cin>>n>>k;
	cout<<ok(k);
	return 0;
}