#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>ans(600);
void multi(vector<int>&v, int b){
	int c=0;
	for(auto &x:v){
		int r = x*b+c;
		c = r/10;
		x = x%10;
	}
	while(c) {
	    v.push_back(c%10);
	    c/=10;
	}
}

void add(vector<int>&x, vector<int>&y){
	long long c =0;
	for(int i=0;i<x.size();i++){
		int s = x[i]+y[i]+c;
		ans.push_back(s%10);
		c = s/10
	}
	for(int i=y.size();i<x.size();i++){
		int s = c+x[i];
		ans.push_back(s%10);
		c = s/10;
	}
	if(c){
		ans.push_back(c);
	}
}
int main(int argc, char const *argv[])
{
	string A,B;
	cin>>A>>B;
	vector<int> v;
	vector<int> b;
	for(auto x:A){
		v.push_back(x-'0');
	}
	reverse(v.begin(), v.end());

	for(auto x:B){
		b.push_back(x-'0');
	}
	reverse(b.begin(), b.end());

	int len = (int)A.size();
	int len2 = (int)B.size();
	vector<int>r;
	if(len>len2){
		vector<int>n;
		n = v;
		for(int i=0;i<len;i++){
			mul(n,b[i]);
			add(v,)
		}
		reverse(v.begin(), v.end());
		for(auto x:v){
			cout<<x;
		}
	}
	else{
		for(int i=0;i<len2;i++){
			C = mul(b,v[i]);
			add(b,C);
		}
		reverse(b.begin(), b.end());
		for(auto x:b){
			cout<<b;
		}
	}
	return 0;
}