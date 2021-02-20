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
		cout<<" In constructor fn"<<endl;
	}
	~myclass(){
		cout<<" Destructing---"<<endl;
	}
	void set_myclass(int a, int b){
		x = a;
		y = b;
	}
	
	int getMultiply(){
		return x*y;
	}
	void show(){
		cout<<x<<" "<<y<<endl;
	}
};
int change_myclasse(myclass *ob){
	ob->set_myclass(4,5);
	return ob->getMultiply();
}

int main(int argc, char const *argv[])
{
	myclass ob2;
	ob2.set_myclass(2,3);
	ob2.show();
	cout<<change_myclasse(&ob2)<<endl;
	ob2.show();
	return 0;
}
