#include <iostream>
#include <string>
using namespace std;

class student{
public:
	string roll;
	string name;
	float cgpa;
	void getinfo(){
		cout<<"\t"<<roll<<"\t"<<name<<"\t"<<cgpa<<endl;
	}
};
int main(){
	int n;
	cin>>n;
	student s[10];
	for(int i=0;i<n;i++){
		cin>>s[i].roll>>s[i].name>>s[i].cgpa;
	}
	cout<<"\t"<<"Roll"<<"\t"<<"Name"<<"\t"<<"CGPA"<<endl;
	for(int i=0;i<n;i++){
		s[i].getinfo();
	}

	return 0;
}