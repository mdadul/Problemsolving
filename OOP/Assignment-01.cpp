#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class student
{
	int Id,Age;
	double tuition_fee;
public:
	student(){
		cout<<"Enter Id==>";
		cin>>Id;
		cout<<"Enter Tuition Fee==>";
		cin>>tuition_fee;
		cout<<"Enter Age==>";
		cin>>Age;
		cout<<endl;
	}	
	void Get_data(){
		cout<<Id<<"\t"<<tuition_fee<<"\t\t"<<Age<<endl;
	}
};
int main(int argc, char const *argv[])
{
	cout<<"Enter your total  Student no:  "<<endl;
	int n;
	cin>>n;
	student list[n];
	cout<<"==============================================="<<endl;
	cout<<"ID\tTution Fee\tAge\t"<<endl;
	cout<<"==============================================="<<endl;
	for(int i=0;i<n;i++){
		list[i].Get_data();
	}
	return 0;
}
