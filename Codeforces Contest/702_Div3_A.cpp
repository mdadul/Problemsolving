#include <bits/stdc++.h>
using namespace std;
#define fasterInOut ios::sync_with_stdio(false); cin.tie(0);

#define pi acos(-1)
#define ll long long
#define ull unsigned long long

#define  cos(a)     cos(a*pi/180)
#define  sin(a)     sin(a*pi/180)
#define  tan(a)     tan(a*pi/180)
#define  cosi(a)    acos(a)/(pi/180)
#define  sini(a)    asin(a)/(pi/180)
#define  tani(a)    atan(a)/(pi/180)
 
ll pow(ll c,ll d){return d==0?:c*pow(c,d-1);}
ll gcd(ll a,ll b) {return b==0? a:gcd(b,a%b);}
ll lcm(ll a,ll b) {return ((a*b)/gcd(a,b));}

int main(int argc, char const *argv[])
{
	fasterInOut;
	int tc;
	cin>>tc;
	while(tc--) {
		int n;
		cin>>n;
		int arr[n+10];
		for(int i=0;i<n;i++){
		  	cin>>arr[i];
		}
		int cnt=0;
	    for(int i=0;i<n-1;i++){
	    	int mx = max(arr[i],arr[i+1]);
			int mn = min(arr[i],arr[i+1]);
			int d = mx/mn;
			if(d>2){
				while(mn>mx) {
				    mn*=2;
				    cnt++;
				}
			}
	    }
		cout<<cnt<<endl;
	}

	return 0;
}
