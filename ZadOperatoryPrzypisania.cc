#include <iostream>
#include <locale.h>
using namespace std;

void OperatoryArytmetyczne(), OperatoryPrzypisania();;

int main()
{
    setlocale(LC_CTYPE, "Polish");
    cout << "Operatory Arytmetyczne" << endl;
    OperatoryArytmetyczne();
    cout << "Operatory Przypisania" << endl;
    OperatoryPrzypisania();
}

void OperatoryArytmetyczne() {
    float dzialanie;
    float a = 13;
    float b = 2;

    // Dodawanie
    cout << "dzialanie = " << a << " + " << b << endl;
    dzialanie = a + b;
    cout << "Suma: " << dzialanie << "\n" << endl;

    // Odejmowanie
    cout << "dzialanie = " << a << " - " << b << endl;
    dzialanie = a - b;
    cout << "Różnica: " << dzialanie << "\n" << endl;

    // Mnożenie
    cout << "dzialanie = " << a << " * " << b << endl;
    dzialanie = a * b;
    cout << "Iloczyn: " << dzialanie << "\n" << endl;

    // Dzielenie
    cout << "dzialanie = " << a << " / " << b << endl;
    dzialanie = a / b;
    cout << "Iloraz: " << dzialanie << "\n" << endl;

    // Reszta z dzielenia
    cout << "dzialanie = " << a << " % " << b << endl;
    dzialanie = (int)a % (int)b;
    cout << "Reszta z dzielenia: " << dzialanie << "\n" << endl;
}

void OperatoryPrzypisania() {
    int x = 20;
    int y = 7;

    // Przypisanie wartości
    cout << "x = " << x << ", y = " << y << endl;
    int z = x;
    cout << "dzialanie: z = x" << endl;
    cout << "Wartość z: " << z << endl;

    // Przypisanie przez sumowanie
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "dzialanie: z += y" << endl;
    z += y;
    cout << "Po dodaniu: " << z << endl;

    // Przypisanie przez odejmowanie
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "dzialanie: z -= x" << endl;
    z -= x;
    cout << "Po odjęciu: " << z << endl;

    // Przypisanie przez mnożenie
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "dzialanie: z *= z" << endl;
    z *= z;
    cout << "Po pomnożeniu: " << z << endl;

    // Przypisanie przez dzielenie
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "dzialanie: z /= y" << endl;
    z /= y;
    cout << "Po podzieleniu: " << z << endl;

    // Przypisanie przez modulo
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "dzialanie: z %= x" << endl;
    z %= (int)x;
    cout << "Po użyciu modulo: " << z << endl;
}
