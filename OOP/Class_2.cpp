#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


class worker
{
	float salary;
public:
	int id;
	//constructor function;
	//It's name must be  same class name
	//automatic call
	//no return type
	//if we don't write constructor function, compiler will generated default contructon function
	worker(int x,int y){
		id = x;
		salary = y;
		//cout<<id<<" " <<salary<<endl;
		//cout<<"Here comes the control!"<<endl;
	}
	//if we use contructor function , we will not use below fuction(set_data)
	// void set_data(float x){
	// 	salary = x;
	// }
	void show_data(){
		cout<<"ID:  "<<id<<"salary:: "<<salary<<endl;
	}
	
};
int main(int argc, char const *argv[])
{
	worker a(10,123),b(10,122);  // here a is an object

	// a.set_data(10);
	// b.set_data(12);
	
	a.show_data();
	b.show_data();

	return 0;
}