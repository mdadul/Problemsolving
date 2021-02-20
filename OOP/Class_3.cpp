#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class student
{
	static int x;
	int y;
public:
	
	student(int a,int b){
		x = a;
		y = b; 
		//we can call member function in constructor function.
	}
	void show(){
		cout<<x<<" "<<y<<endl;
	}
	
};
int student::x;
int main(int argc, char const *argv[])
{
	student obj(10,1000);

	obj.show();
	student ob(11,1111);
	obj.show();
	ob.show();
	return 0;
}