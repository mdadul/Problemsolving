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
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j  || i==p){
				if(arr[i][j]!=d){
					flag=1;
					//break;
				}
				cout<<"<--->"<<p;
				p--;

			}
			if(arr[i][j]!=b){
				flag=1;
				//break;
			}
		}
	}
	if(flag==0) cout<<"YES"<<"\n";
	else cout<<"No"<<"\n";
	return 0;
}