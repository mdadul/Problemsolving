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
	    int A,B,n;
	    cin>>A>>B>>n;
	    int d=0,flag=0;
	    int a[n+10],b[n+10];

	    for(int i=0;i<n;i++){
	    	cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	    	cin>>b[i];
	    }

	    for(int i=0;i<n;i++){
	    	int d;
	    	d = (b[i]+A-1)/A;
	    	B = B-d*a[i];
	    	if(B<0){
	    		flag =1;
	    		break;
	    	}
	    }
	    cout<<B<<"\n";
	    if(flag ==0) cout<<"Yes"<<"\n";
	    else cout<<"No"<<"\n";
	}
	return 0;
}
