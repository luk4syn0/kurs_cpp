// ZadParzystaCase.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <locale.h>
using namespace std;

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
    cout << ((liczba % 2) == 0 ? "Parzysta" : "Nieparzysta") << endl;
}

int main()
{
    setlocale(LC_CTYPE, "Polish");
    short zadanie = 0;
    short liczba = 12;

    switch (zadanie)
    {
    case 1:
        czyParzystaMod(liczba);
        break;
    case 2:
        czyParzystaWarunkowy(liczba);
        break;

    default:
        czyParzystaBin(liczba);
        break;
    }
}
