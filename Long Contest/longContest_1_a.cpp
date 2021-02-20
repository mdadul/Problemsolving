//Accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	while(n--) {
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a+b>c) cout<<"OK"<<"\n";
	    else cout<<"Wrong!!"<<"\n";
	}
	return 0;
}