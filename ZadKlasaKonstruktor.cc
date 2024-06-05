#include <iostream>
#include <locale.h>
using namespace std;


class Klasa {
public:
    // Domyślny konstruktor
    Klasa() {
        cout << "Domyślny konstruktor" << endl;
    }

    // Konstruktor z niepustą liczbą zmiennych argumentów
    Klasa(int x, const string& str) : value(x), name(str) {
        cout << "Konstruktor (lista inicjalizacyjna) z argumentami " << endl;
    }

    Klasa(int x){
        value = x;
        cout << "Konstruktor (standardowy) z jednym argumentem" << endl;
    }

    // Domyślny destruktor
    ~Klasa() {
        cout << "Domyślny destruktor" << endl;
    }
private:
    int value = 0;
    string name = "default";
};

int main()
{
    setlocale(LC_CTYPE, "Polish");

    Klasa obj1;               // Domyślny konstruktor
    Klasa obj2(42, "Hello");  // Konstruktor (lista)
    Klasa obj3(42);           // Konstruktor (klasyczny)

    return 0;
}
