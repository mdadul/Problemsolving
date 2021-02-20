#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
/*


*/
class myclass
{
public:
	int *p;
	myclass(int a){
		cout<<"dfhkd"<<endl;
		p = new int;
		*p=a;
		//cout<<*p<<endl;
	}
	~myclass(){
		delete p;
		cout<<"frrr"<<endl;
	}
	int getp(){
		return *p;
	}
	
};

void prr(myclass ob){
	cout<<ob.getp()<<endl;

	
}
int main(int argc, char const *argv[])
{
	myclass ob(100);
	prr(ob);

	cout<<ob.getp()<<endl;
	return 0;
}