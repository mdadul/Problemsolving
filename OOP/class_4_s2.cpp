#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
class myclass
{
	int x,y;
public:
	myclass(){
		cout<<"ksdjf";
	}
	~myclass(){
		cout<<"skdj";
	}
	void set_myclass(int a, int b){
		x = a;
		y = b;
	}
	
	int getMultiply(){
		return x*y;
	}
};
int change_myclasse(myclass ob){
	ob.set_myclass(4,5);
	return ob.getMultiply();
}
int main(int argc, char const *argv[])
{
	myclass ob2;
	ob2.set_myclass(2,3);
	cout<<change_myclasse(ob2)<<endl;
	return 0;
}