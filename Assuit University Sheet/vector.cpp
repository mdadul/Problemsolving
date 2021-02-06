#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
bool comp(const int x, const int y){
	return x<y;
}
int main(int argc, char const *argv[])
{
	fasterIO;
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	string s1;
	int n;
	cin>>n>>s1;
	sort(s1.begin(), s1.end(),comp);
	cout << s1;
	return 0;
}