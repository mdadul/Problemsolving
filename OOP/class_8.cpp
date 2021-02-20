#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;

// ---Polymorphism------
/////////////////////
/*
void show(int a){
	cout<<a<<endl;
}
void show(int a, int b){
	cout<<a<<" "<<b<<endl;
}
void show(string s){
	cout<<s;
}*/
///////////////////////

class myclass
{
public:
	myclass();
	~myclass();
	
};
int main(int argc, char const *argv[])
{
	show(5);
	show(5,5);
	show("Emdadul");
	return 0;
}








/*
OOP Characteristics

1. encapsulation
2. polymorphism
3. inheritance
*/