#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;
class product
{
	double buyingPrice,sellingPrice,profit,total_insvet;
	int total_quantity,salling_quantity;
public:
	product(){

	}
	void sale(int salling_quantity){
		total_quantity -=salling_quantity 
	}
	void show_info(){
		cout<<"Available Product"<<total_quantity<<endl;
		cout<<"Profit "<<profit<<endl;
		cout<<"Current Balance "<<total_insvet+profit<<endl;
	}
	~product();
	
};
int main(int argc, char const *argv[])
{
	cout<<"Welcome To the Stor"<<endl;
	cout<<"Enter total amount of product in your store: "<<endl;
	int totalProduct;
	cin>>totalProduct;
	cout<<"Enter how many product you want to sale: "<<endl;
	int salligAmmount;
	cin>>salligAmmount;
	cin>>
	return 0;
}