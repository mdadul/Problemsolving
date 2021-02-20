#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
//==================================
///1.---> Call By Referance.......
//==================================

///Benifite: ---->> Destructor function work once.
///Disadvantage--->>Nothing but. Change original value...
class myclass
{
	int x,y;
public:
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
// class test
// {
// 	int x,y;
// public:
// 	test(int a, int b){
// 		x = a;
// 		y = b;
// 	}
// 	~test();
// 	void show(){
// 		cout<<x <<" "<<y<<endl;
// 	}
	
// };
//To change the original value we use pointer .
//dot operator isn't useable in pointer
// we use -> insted of dot
int change_myclasse(myclass *ob){
	ob->set_myclass(4,5);
	return ob->getMultiply();
}

/*
=========================
======Call by Value======
=========================
void test(int *i){
	*i=12;
	cout<<*i<<endl;
}
*/
int main(int argc, char const *argv[])
{
	myclass ob2;
	ob2.set_myclass(2,3);
	ob2.show();
	cout<<change_myclasse(&ob2)<<endl;
	ob2.show();

	// test ob1;
	// ob1.set_myclass(33,4);

	// ob2 = ob1;
	// ob1.show();
	// ob2.show();

	/*
	======Call By Value====
	=======================
	int a = 5;
	test(&a);
	*/
	return 0;
}