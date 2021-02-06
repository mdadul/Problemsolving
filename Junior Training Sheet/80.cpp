//Accepted

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	char arr[n+5][m+5];
	int w=0,b=0,g=0,c=0,M=0,y=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
			if(arr[i][j]=='W') w++;
			else if(arr[i][j]=='B') b++;
			else if(arr[i][j]=='G') g++;
			else if(arr[i][j]=='C') c++;
			else if(arr[i][j]=='M') M++;
			else if(arr[i][j]=='Y') y++;
		}
	}
	if(c>0  || M>0  || y>0) cout<<"#Color";
	else cout<<"#Black&White";
	return 0;
}