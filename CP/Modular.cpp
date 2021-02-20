//Topic : Modular Arithmetic
// Date: 17/02/2021

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	//==================================//
	//+ve is not same -ve
	//cout<<(-15%12)+12<<endl;
	// cout<<(-7%3)+3<<endl;
	//Fact:	r = a%n == (a+qn)%n ==> I.e adding multipier on doesn't affect result
	
	// int a = -7, n=3;
	//in computer, mod operation take more time  
	// cout<<(a % n + n)%n<<endl;
	//=====================================//

	//-----------------------------------//
	//////////////////////
	//for negative number
	///////////////////////
	/*
	 if(a%n <0){
	 	a+=n;
	 }
	*/
	//------------------------------------//
	//========================//
	//(a*b)%n == (a%n * b%n)%n;
	//========================//

	//========================//
	//(a+b)%n == (a%n)+(b%n)
	//========================//


	//------------------------//
	/*

	(a*b*c)%n == (((a%n)*(b%n))%n * c%n)%n;

	*/

	/*
	//----------------------------//

	int n,m;
	cin>>n>>m;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans = 1;
	for(int i=0;i<n;i++){
		ans = ((ans%m) * (a[i] % m))%m;
	}
	cout<<ans<<endl;

	//**********************************///


	// Modular multipicative inverse

	// (a/b)%n ==> ((a%n) *(b^-1%n))%n
	//-----------------------------------//

	//+++++++++++++++++++++++++++++++++++//
	// a% 2^n ===> a&(2^n-1)
	//-----------------------------------//
	// a%0 undefined.
	//--------------------------------


	// if we want flaoting point number mod .we will use fomd() function
	
	return 0;
}