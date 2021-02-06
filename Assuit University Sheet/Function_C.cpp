#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long int
int binary(ll n){
    ll ans=0,i=1;
    while(n!=0){
        ans = ans*i+n%2;
        i*=10;
        n/=2;
    }
    return ans;
}
int palindrome(ll n){
    ll i ,rev =0;
    while(n!=0){
        rev = rev*10;
        rev = rev + n%10;
        n/=10;
    }
    return rev;
    
}

int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	if(n%2==0) cout<<"NO";
	else{
		cout<<binary(n)<<"----->>>>"<<binary(palindrome(n))<<endl;
		if(binary(n)==palindrome(binary(n))) cout<<"YES";
		else cout<<"NO";
	}
	return 0;
}