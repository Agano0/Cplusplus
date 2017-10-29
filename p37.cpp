#include <iostream>
#include <ctime>
#include <string>
int main ()
{
    std::string imie = "";
    std::string nazwisko = "";
    std::string wiek = "";
    time_t now = time(0);
    char* dt = ctime(&now);
    std::cout << "Podaj kolejno imie, nazwisko oraz wiek" << std::endl;
   getline(std::cin, imie);
   getline(std::cin, nazwisko);
   getline(std::cin, wiek);
    std::cout << "Menu:" << std::endl << "1. Dane Ucznia" << std::endl << "2.Aktualna data" << std::endl << "3. Algorytm(Konwerter C' na F'" << std::endl << "4.zakoncz program" << std::endl << "Podaj numer opcji:" << std::endl;
    int n;
    std::cin >> n;
    switch (n)
    {
        case 1: std::cout << "Imie: " << imie << std::endl << "Nazwisko: " << nazwisko << std::endl << "Wiek: " << wiek << std::endl; break;
        case 2: std::cout << "Aktualna data: " << dt << std::endl; break;
        case 3: {
            float F, C;
            std::cout << "Podaj temperature w stopniach Celsjusza:" << std::endl;
            std::cin >> C;
            F = (C * 9.0) / 5.0 + 32;
            std::cout << "Temperatura w stopniach Fahrenheita wynosi:" << F << std::endl;;
        } break;
        default: std::cout << "Koniec programu" << std::endl; break;
    }
    
    
    
    return 0;

}
