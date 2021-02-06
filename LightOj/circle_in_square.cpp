#include <bits/stdc++.h>
using namespace std;
#define fasterInOut ios::sync_with_stdio(false); cin.tie(0);

#define pi acos(0.0)
#define ll long long
#define ull unsigned long long
int main(int argc, char const *argv[])
{
	fasterInOut;
	int n;
	cin>>n;
	int i=1;
	while(n--) {
	    double r;
	    cin>>r;
	    double ans = (4*r*r)-(pi*r*r/4);
	    cout<<"Case "<< i <<" : "<<fixed <<setprecision(2)<<ans<<endl;
	    i++;
	}
	return 0;
}
