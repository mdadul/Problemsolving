#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#endif

#include <iostream>
#include <string>
#include<iomanip>
#define nw "\n"

#define dg(x) cout << #x << " = " << x << endl

using namespace std;

#define pi acos(-1)
#define ll long long
#define ull unsigned long long

int main()
{
	ll x1,x2,y1,y2;
	
	cin>>x1>>y1>>x2>>y2;
	
	ll x = abs(x1-x2);
	ll y = abs(y1-y2);
	x = x*x;
	y = y*y;
	
	double ans = sqrt(double(x)+double(y));
	cout<<fixed<<setprecision(9)<<ans;

	return 0;
}
