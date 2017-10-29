#include<iostream>
#include<cmath>
using namespace std;
int k, m, n;
int main()
{
    m=5;
    n=4;
    k=4;
    if (m+n<k) cout << k << endl;
    else
    {
        k=m+n;
        if (m+1<n)
        {
            n*=4;
            k--;
        }
        else
        {
            m*=2;
        }
    }
    cout << m << endl << k << endl << n << endl;
    return 0;
}
