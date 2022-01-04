#ifdef ONLINE_JUDGE
    #include<bits/stdc++.h>
#endif

#include<iostream>
#include<string>
using namespace std;

#define ll long long

int main()
{
	string s;
	cin>>s;
	cout<<s;
	reverse(s.begin(),s.end());
	cout<<s;
	return 0;
}
