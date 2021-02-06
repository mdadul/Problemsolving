#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct tshirt
{
	string name,color;
	char sz;
};
bool comp(tshirt x, tshirt y){
	return ((x.color>y.color) && (x.sz<y.sz) && (x.name>y.name));
}
int main(int argc, char const *argv[])
{
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		vector<int>v(n);
		for(auto & x : v) {
			getline(cin,x.name);
			cin>>x.color>>x.sz;
		}
		sort(v.begin(), v.end(),comp);
		for(auto x:v){
			cout<<x.color<<" "<<x.sz<<" "<<x.name<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}