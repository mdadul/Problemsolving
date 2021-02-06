#include <bits/stdc++.h>
using namespace std;
#define fasterInOut ios::sync_with_stdio(false); cin.tie(0);

int main(int argc, char const *argv[])
{
	fasterInOut;
	
	int tc;
	cin>>tc;
	while(tc--) {
	    int x,y;
	    cin>>x>>y;
	    string s;
	    cin>>s;
	    int a=0,b=0;
	    if(x>0 && y>0){
	    	for(int i=0;i<s.size();i++){
	    		if(s[i]=='R') a++;
	    		else if(s[i]=='U') b++;
	    	}
	    	if(a>=x && b>= y) cout<<"YES"<<"\n";
	    	else cout<<"NO"<<"\n";

	    }
	    else if(x<0 && y>0){
	    	x = abs(x);
	    	for(int i=0;i<s.size();i++){
	    		if(s[i]=='L') a++;
	    		else if(s[i]=='U') b++;
	    	}
	    	if(a>=x && b>= y) cout<<"YES"<<"\n";
	    	else cout<<"NO"<<"\n";
	    }
	    else if(x<0 && y<0){
	    	x = abs(x);
	    	y = abs(y);
	    	for(int i=0;i<s.size();i++){
	    		if(s[i]=='L') a++;
	    		else if(s[i]=='D') b++;
	    	}
	    	if(a>=x && b>= y) cout<<"YES"<<"\n";
	    	else cout<<"NO"<<"\n";
	    }
	    else if(x>0 && y<0){
	    	y = abs(y);
	    	for(int i=0;i<s.size();i++){
	    		if(s[i]=='R') a++;
	    		else if(s[i]=='D') b++;
	    	}
	    	if(a>=x && b>= y) cout<<"YES"<<"\n";
	    	else cout<<"NO"<<"\n";
	    }
	}


	return 0;
}
