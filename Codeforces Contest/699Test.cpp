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
		string s;
	    int x,y;
	    cin>>x>>y>>s;
	    int p,q;
	    p = 0,q=0;

	    for(int i=0;i<s.size();i++){
	    	if(s[i]=='U'){
	    		q++;
	    	}
	    	else if(s[i]=='R'){
	    		p++;
	    	}
	    	else if(s[i]=='D'){
	    		q--;
	    	}
	    	else if(s[i]=='L'){
	    		p--;
	    	}
	    }
	    if(x>0 && y>0){
	    	if(p>=x && q>=y) cout<<"YES"<<"\n";
	    	else cout<<"NO"<<"\n";
	    }
	    else if(x>0 && y<0){
	    	y = abs(y);
	    	if(p>=x && q>=y) cout<<"YES"<<"\n";
	    	else cout<<"NO"<<"\n";
	    }
	    else if(x<0 && y<0){
	    	x = abs(x);
	    	y = abs(y);
	    	if(p>=x && q>=y) cout<<"YES"<<"\n";
	    	else cout<<"NO"<<"\n";	
	    }
	    else if(x<0 && y>0){
	    	x = abs(x);
	    	if(p>=x && q>=y) cout<<"YES"<<"\n";
	    	else cout<<"NO"<<"\n";
	    }


	}
	return 0;
}
