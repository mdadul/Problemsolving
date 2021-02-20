//Lecture -03
//CSE-1222
//NAZMUL AREFIN

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

/*
class myclass 
{
	members-->> variable & function
public:	 Access anywhere 
private : access only class scope.
	
};
*/
//Example
class student{
private: 
	int num;

public:
	void setdata(int d);
	//function declaration
	void  showdata(){
		cout<<"Data is "<<num<<endl;
	}

};
/*
//outside function defination 
 void student::setdata(int n){
	num =a;
}
int student::showdata(){
	return num;
}

*/

void student::setdata(int d){
	num = d;
}
int main(int argc, char const *argv[])
{
	student obj1, obj2;

	obj1.setdata(10);
	obj2.setdata(34);

	obj1.showdata();
	obj2.showdata();
	//return 0;
}