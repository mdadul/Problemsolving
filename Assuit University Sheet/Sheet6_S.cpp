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
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c>a)
	{
		cout<<"Valid\n";
		double s = (a+b+c)/2.0;
		double A = s*(s-a)*(s-b)*(s-c);
		A = sqrt(A);
		cout<<fixed<<setprecision(6)<<A;
	}
	else cout<<"Invalid";

	return 0;
}
