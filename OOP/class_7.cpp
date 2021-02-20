#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class where
{
private:
	char charary[10];
public:
	void reveal(){
		cout<<"\nMY object's address is "<<this;
	}
	
};
int main(int argc, char const *argv[])
{
	where w1,w2,w3;
	w1.reveal();
	w2.reveal();
	w3.reveal();
	cout<<"\n";
	return 0;
}

/*
MY object's address is 0x61fe46
MY object's address is 0x61fe3c
MY object's address is 0x61fe32
*/