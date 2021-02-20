#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))
#define clr(v, d)		memset(v, d, sizeof(v))

const int MAX = 300;
typedef int big[MAX];

void big_zero (big num)			// b = 0
{
	int i;
	for (i=0 ; i<MAX ; i++)
		num[i] = 0;
}

void big_copy(big to, big from)	// to <-- from
{
	int i;
	for(i=0;i<MAX;i++)
		to[i] = from[i];
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
int big_cmp (big a, big b)		// a <=> b return 1, 0, -1
{
	int i;
	for (i=MAX-1 ; i>=0 ; i--)
	{
		if (a[i] > b[i])
			return 1;
		else if (a[i] < b[i])
			return -1;
	}
	return 0;
}
void big_product(big result, int factor)
{
    int carry = 0;
    for (int i=0; i<MAX; i++)
    {
        carry += result[i] * factor;
        result[i] = carry % 10;
        carry /= 10;
    }
}
void big_add(big ac, int n)	//add n over a
{
	int i, num, carry = n;
	for(i=0;i<MAX && carry;i++)
	{
		num  = ac[i] + carry;
		ac[i] = num%10;
		carry = num/10;
	}
}
char big_sub (big a, big b, big result, char sign='+')
{
	if(big_cmp(a, b) < 0)
		return big_sub(b, a, result, '-');

	big_zero(result);
	int len_a = big_len(a);
	int len_b = big_len(b);

	int i, max = len_a > len_b ? len_a : len_b;

	for(i=0;i<=max;i++)
		result[i] = a[i] - b[i];

	for(i=0;i<=max;i++)
	{
		while(result[i] < 0)
		{
			result[i]   += 10;
			result[i+1] -= 1;
		}
	}
	return sign;
}
void big_divide(big ac, big div, big reminder)
{
    big cpy;
	big_zero(reminder);

	int i = big_len(ac);

    while (i >= 0)
    {
		big_product(reminder, 10);
        big_add(reminder, ac[i]);
        ac[i] = 0;

        while( big_cmp(reminder, div) >=0 ) 
		{
			big_sub(reminder, div, cpy);	
			big_copy(reminder, cpy);		
			ac[i]++;
		}
		i--;
    }
    //big_print(reminder);
	big_print(ac);
}

void big_mod(big a, big div, big reminder)
{
	big cpy;
	big_zero(reminder);

	int i = big_len(a);

    while (i >= 0)
    {
		big_product(reminder, 10);
        big_add(reminder, a[i]);

        while( big_cmp(reminder, div) >=0 ) //Insted of /, %
		{
			big_sub(reminder, div, cpy);	//cpy = reminder-div
			big_copy(reminder, cpy);		//reminder = cpy
		}
		i--;
    }
}
int main()
{
	string num1, num2;
	char ch;
	big a, b, c;

	while(cin>>num1>>ch>>num2)
	{
		big_from_str(a, num1);
		big_from_str(b, num2);
		if(ch=='/'){
			big_divide(a,b,c);
		}
		else{
			big_mod(a,b,c);
			big_print(c);
		}
	}
	return 0;
}