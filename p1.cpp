#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	a = 3;
	b = -2;
	c = 10;
	

	if ( a + b > c) 
	{
		a*=2;
		b-=1;
		if ( c > 0 )
		{
			c+=a;
		}
		else c+=b;
		
	}
	else c+=a*b;
	cout << a << endl << b << endl << c << endl;
	return 0;
}
