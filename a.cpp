#include<iostream>

#include<cstring>
using namespace std;
int main()
{
int liczba;
string napis;
char znak;
int c;
liczba = 45; //operator przypisania dla liczby
napis = "Kot ma ale"; // operator przypisania dla napisu
znak = c; // operator przypisania dla znaku
cout << "Oto wartosci zmiennych:" << liczba << napis << znak << endl << endl;
cout << "Podaj wartosc liczby";
cin >> liczba;
cin.ignore();
cout << "Jakis napis( bez polskich znakow )";
cin >> napis;
cin.ignore();
cout << "Podaj znak";
cin >> znak;
cin.ignore();
cout << "Oto wartości zmiennych:" << liczba << napis << znak << endl << endl;
cout << "Wcisnij ENTER aby zakonczyc" << endl;
getchar();
return 0;
}
