#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x, y, z;
	x=5;
	y=1;
	z=6;
	x+=y;

	if( x>y+1 ) {
		x+=z;
		z--;
	}
	else {}
	if( z<3 ) {
		z*=x;
	}
	else {
		z*=y;
		z++;
	}
cout << x << endl << y << endl << z << endl;

	return 0;
}
