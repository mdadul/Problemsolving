#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1)
#define ll long long
#define ull unsigned long long
 
ll gcd(ll a,ll b) {return b==0? a:gcd(b,a%b);}
bool co_prime(int a,int b){
	if(gcd(a,b)==1) return true;
	else return false;
}

int main(int argc, char const *argv[])
{
	ll l,r;
	cin>>l>>r;
	vector<ll>c;
	for(ll i=l;i<=r;i++){
		if(co_prime(i,i+1)){
			if(co_prime(i+1,i+2)){
				if(co_prime(i,i+2)==false){
					c.push_back(i);
					c.push_back(i+1);
					c.push_back(i+2);
					break;
				}
				
			}
		}
	}
	if((int)c.size()==0){
		cout<<"-1"<<"\n";
	}
	else {
		for(ll i=0;i<c.size();i++){
			cout<<c[i]<<" ";
			if(i==2) break;
		}
	}
	return 0;
}
