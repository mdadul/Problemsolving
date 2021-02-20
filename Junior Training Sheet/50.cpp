// Verdict 	: Accepted

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))
#define clr(v, d)		memset(v, d, sizeof(v))

const int MAX = 600;
typedef int big[MAX];

void big_zero (big num)			// b = 0
{
	int i;
	for (i=0 ; i<MAX ; i++)
		num[i] = 0;
}


int big_len(big num)
{
	int j;
	for (j=MAX-1; j && !num[j]; j--);
	return j;
}

void big_print(big num)
{
	int i;
	for (i=big_len(num); i>=0; i--)
	{
		cout<<num[i];
	}
	cout<<"\n";
}

void big_from_str(big num, string str)
{
	int i, len = str.size()-1;
	big_zero(num);

	for(i=len;i>-1;i--)
		num[len-i] = str[i]-'0';
}
void big_product(big a, big b, big result)
{
	int len_a = big_len(a);
	int len_b = big_len(b);

	if(len_a < len_b)
	{
		big_product(b, a, result);
		return;
	}

	big_zero(result);
	int i, j;

	int cursor = 0, pos = 0;

	for(i=0; i<=len_b; pos = 0, cursor++, i++)
	{
		for(j=0; j<=len_a; j++, pos++)
		{
			result[pos+cursor] += b[i]*a[j];

			if(result[pos+cursor] >= 10)
			{
				result[pos+cursor+1] += result[pos+cursor]/10;
				result[pos+cursor]   %= 10;
			}
		}
	}
}
int main()
{
	string num1, num2;
	big a, b, c;

	while(cin>>num1>>num2)
	{
		big_from_str(a, num1);
		big_from_str(b, num2);

		big_product(a, b, c);
		big_print(c);
	}
	return 0;
}