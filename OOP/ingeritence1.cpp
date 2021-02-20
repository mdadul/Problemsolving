#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class person{
public: 
	string name;
	int age;

	void show(){
		cout<<"Name: "<<name<<"\n"<<"Age : "<<age<<endl;
	}
};
class student : public person
{
public:
	int id;

	void show1(){
		show();
		cout<<"Id: "<<id<<endl;
	}
};
int main(int argc, char const *argv[])
{
	student s;
	s.name = "emdadul";
	s.age = 33;
	s.id = 4444;
	s.show1();
	return 0;
}