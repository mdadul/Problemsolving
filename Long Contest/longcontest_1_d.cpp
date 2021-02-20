//Accepted

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
struct D
{
	char ch;
	int fq;
};
bool comp(D x, D y){
	if(x.fq==y.fq){
		return x.ch>y.ch;
	}
	return x.fq<y.fq;
}
int main(int argc, char const *argv[])
{
	string s;
	int flag=0;
	while(getline(cin,s)) {
		vector<D>v;
		int count[130]={0};
	    for(int i=0;i<s.size();i++){
	    	count[s[i]]++;
	    }
	    for(int i=0;i<128;i++){
	    	if(count[i]!=0){
	    		D temp;
	    		temp.ch = i;
	    		temp.fq = count[i];
	    		v.push_back(temp);
	    	}
	    }
	    sort(v.begin(), v.end(),comp);
	    if(flag==1){
	    	cout<<"\n";
	    }
	    for(auto x:v){
	    	cout<<toascii(x.ch)<<" "<<x.fq<<"\n";
	    }
	   
	    flag =1;
	    
	}
	return 0;
}