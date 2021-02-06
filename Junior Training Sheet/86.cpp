#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	int tt=4,cu=6,oct=8,dod=12,ico=20;
	int ans=0;
	while(tc--) {
	    string s;
	    cin>>s;
	    if(s=="Tetrahedron") ans+=tt;
	    else if(s=="Cube") ans+=cu;
	    else if(s=="Octahedron") ans+=oct;
	    else if(s=="Dodecahedron") ans+=dod;
	    else if(s=="Icosahedron") ans+=ico;

	}
	cout<<ans;
	return 0;
}

