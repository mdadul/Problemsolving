#ifdef ONLINE_JUDGE
    #include<bits/stdc++.h>
#endif

#include<iostream>
#include<string>
#define nw "\n"
#define dg(x) cout << #x << " = " << x << endl
 
using namespace std;

#define pi acos(-1)
#define ll long long
#define ull unsigned long long

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		int arr[n+10];
		int cnt[120]={0};
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			cnt[abs(arr[i])]++;
		}
		int c=0;
		if(cnt[0]>=1) c++;
		
		for(int i=1; i<=100; i++)
		{
			if(cnt[i]==1) c++;
			else if(cnt[i]>=2) c+=2;
		}
		cout<<c<<endl;
	}
		
	return 0;
}
