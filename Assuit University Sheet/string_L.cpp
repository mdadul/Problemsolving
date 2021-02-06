//accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,q;
	string s;
	cin>>n>>q>>s;
	while(q--) {
	    string t;
	    cin>>t;
	    if(t=="pop_back") s.pop_back();
	    else if(t=="front") cout<<s[0]<<endl;
	    else if(t=="sort"){
	    	int l,r;
	    	cin>>l>>r;
	    	if(l>r) swap(l,r);
	    	sort(s.begin()+l-1, s.begin()+r);
	    }
	    else if(t=="reverse"){
	    	int l,r;
	    	cin>>l>>r;
	    	if(l>r) swap(l,r);
	    	reverse(s.begin()+l-1, s.begin()+r);
	    }
	    else if(t=="back") cout<<s.back()<<endl;
	    else if(t=="print"){
	    	int x;
	    	cin>>x;
	    	cout<<s[x-1]<<endl;
	    }
	    else if(t=="substr"){
	    	int l,r;
	    	cin>>l>>r;
	    	if(l>r) swap(l,r);
	    	cout<<s.substr(l-1,r-l+1)<<endl;
	    }	   
	    else{
	    	char x;
	    	cin>>x;
	    	s.push_back(x);
	    }


	}
	return 0;
}