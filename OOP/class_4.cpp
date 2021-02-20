#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//How to pass object in function

// if we want to  access a private variable from function
// we should use "friend" keyword in class public section
class myclass
{
	int x,y;
public:
	
	myclass(int a, int b){
		x =a;
		y = b;
	}	
	friend int add_myclass(myclass);	
};
// class myclass2
// {
// public:
// 	int x,y;
// 	myclass2(int m, int n){
// 		x = m;
// 		y = n;
// 	}	
	
// };
int add_myclass(myclass A){		//it is not a member function of myclass
	return A.x+A.y;
}

int main()
{
	myclass ob1(1,2);
	//myclass2 ob2(4,6);
	cout<<add_myclass(ob1)<<endl;
	//cout<<add_myclass(ob2)<<endl;
	return 0;
}