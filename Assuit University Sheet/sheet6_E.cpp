#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#endif

#include <iostream>
#include <string>
#define nw "\n"
#define dg(x) cout << #x << " = " << x << endl

using namespace std;

#define pi acos(-1)
#define ll long long
#define ull unsigned long long

int main()
{
	ll n;
	cin >> n;
	ll cnt = 1;
	while (1)
	{
		ll ans = (cnt * (cnt + 1)) / 2;
		if (ans > n)
		{
			break;
		}
		cnt++;
	}
	while (1)
	{
		cnt--;
		ll ans = (cnt * (cnt + 1)) / 2;
		if (ans <= n)
			break;
	}
	cout<<cnt;

	return 0;
}
