#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int m, n, k;
  m = 5;
  n = 4;
  k = 0;
  if( m+n<k ) {
    cout << k << endl;
    return 0;
  }
  else {
    k=m+n;
  }
  if( m+1<n ) {
    n*=4;
    k--;
  }
  else {
    m*=2;
  }
  cout << m << endl << k << endl << n << endl;
  return 0;
}
