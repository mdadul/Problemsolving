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
	    cin>>s;
	    for(int i=0;i<(int)s.size();i++){
	    	if(i%2==0){
	    		if(s[i]=='a'){
	    			cout<<'b';
	    		}
	    		else if(s[i]=='b'){
	    			cout<<'a';
	    		}
	    		else cout<<'a';
	    	}
	    	else if(i%2==1){
                if(s[i]=='z'){
                	cout<<'y';
                }
                else if(s[i]=='y'){
                	cout<<'z';
                }
                else cout<<'z';
	    	}
	    }
	    cout<<endl;
	}
	return 0;
}
