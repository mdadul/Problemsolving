//Verdict 	: Accepted
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	char arr[n+5][n+5];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	char d = arr[0][0];
	char b = arr[0][1];
	int p = n-1,flag=0;
	if(d==b) cout<<"NO"<<"\n";
	else{

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j){
					if(arr[i][j]!=d){
						flag=1;
						break;
					}
				}
				else if(j==p){
					if(arr[i][p]!=d){
						flag=1;
						break;
					}
				}
				else{
					if(arr[i][j]!=b){
						flag=1;
						break;
					}
				}
			}
			p--;
		}
		if(flag==0 ) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
	return 0;
}
