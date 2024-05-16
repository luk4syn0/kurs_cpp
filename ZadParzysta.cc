// Zadanie 4.4
//--------------------------------------
//Napisz program sprawdzający czy liczba jest parzysta / nieparzysta:
//-trzy funkcje :
//(a)w jednej sprawdzamy z wykorzystaniem operacji bitowych(&);
//(b)w drugiej inaczej(eg.modulo)
//(c)w trzeciej sprawdzenie z użyciem operatora warunkowego zamiast if (lub jako warunek w if: TRUE || FALSE; (... ? 0 : 1))
//- w kodzie funkcji(a) proszę rozpisać jako komentarz przykładowe sprawdzenie
//- nazwać program : ZadParzysta.cc


#include <iostream>
#include <locale.h>
using namespace std;

void czyParzystaBin(int liczba);
void czyParzystaMod(int liczba);
void czyParzystaWarunkowy(int liczba);
int main()
{
    setlocale(LC_CTYPE, "Polish");
    czyParzystaWarunkowy(91);
}

void czyParzystaBin(int liczba) {
    //czyParzystaWarunkowy(900);
    //Parzysta
    if (liczba & (1 << 0)) {
        cout << "Nieparzysta" << endl;
    }
    else {
        cout << "Parzysta" << endl;
    }
}

void czyParzystaMod(int liczba) {
    //czyParzystaWarunkowy(20);
    //Parzysta
    if ((liczba % 2) == 1) {
        cout << "Nieparzysta" << endl;
    }
    else {
        cout << "Parzysta" << endl;
    }
}

void czyParzystaWarunkowy(int liczba) {
    //czyParzystaWarunkowy(91);
    //Nieparzysta
    cout << ((liczba%2)==0 ? "Parzysta" : "Nieparzysta") << endl;
}