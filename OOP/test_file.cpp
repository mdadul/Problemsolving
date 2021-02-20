#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void test(int *i){
	*i = 12;
	cout<<*i<<endl;
}
int main(int argc, char const *argv[])
{
	int a = 5;
	test(&a);
	return 0;
}
/*
Lab Project:

1. form a team of 3 members ( 05-02-2021)
2. mid: cpp (console application) a class next week.
3. next week a viva  (regrading project idea + cpp knowledge)--->05 Marks
*/