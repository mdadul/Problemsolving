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
	    string s;
	    cin>>s;
	    int sz=(int)s.size();
	    if(sz==3 && s[0]=='o' ) cout<<"1"<<"\n";
	    else if(sz==3 && s[0]=='t' && s[1]=='o' || s[1]=='w') cout<<"2"<<"\n";
	    else if(sz==5 && s[0]=='t' && s[1]=='h' ) cout<<"3"<<"\n";
	    else if(sz==4  && s[0]=='f') cout<<"4"<<"\n";
	    else if(sz==5 && s[0]=='f') cout<<"5"<<"\n";
	    else if(sz==3 && s[0]=='s') cout<<"6"<<"\n";
	    else if(sz==5 && s[0]=='s') cout<<"7"<<"\n";
	    else if(sz==5 && s[0]=='e') cout<<"8"<<"\n";
	    else if(sz==4 && s[0]=='n') cout<<"9"<<"\n";
	    else if(sz==3 && s[0]=='t' && s[1]=='e'  || s[1]=='n') cout<<"10"<<"\n";
	}
	return 0;
}