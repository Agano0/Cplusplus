#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	//a = 3;
	//b = -2;
	c = 10;


	if ( a + b < c) {
		a*=2;
		b-=1;
	}
	else {
		c+=a*b;
		// cout << a << endl << b << endl << c << endl;
	}
	if( c > 0 ) { c+=a;
	}
	else {
		c+=b;
	}

cout << a << endl << b << endl << c << endl;
	return 0;
}
