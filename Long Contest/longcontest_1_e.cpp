//Acceptd
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
struct point
{
	int x,y;
};
bool comp(point a, point b){
	return (a.x<b.x) || (a.x==b.x && a.y>b.y);
}
int main(int argc, char const *argv[])
{
	int tc;
	scanf("%d",&tc);
	while(tc--) {
	    int n;
	    scanf("%d",&n);
	    vector<point> v(n);
	    for(auto &x :v){
	    	scanf("%d %d",&x.x, &x.y);
	    }
	    sort(v.begin(), v.end(),comp);
	    for(auto x:v){
	    	cout<<x.x<<" "<<x.y<<"\n";
	    }
	}
	return 0;
}