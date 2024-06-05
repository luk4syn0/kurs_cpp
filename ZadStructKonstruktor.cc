#include <iostream>
#include <locale.h>
using namespace std;


struct struktura {
    int wartosc1;
    int wartosc2;

    struktura() 
    {
        cout << "Domyślny konstruktor" << endl;
    }

    struktura(int x, int y) : wartosc1(x), wartosc2(y)
    {
        cout << "Konstruktor (lista inicjalizacyjna) z argumentami " << endl;
    }

    struktura(int x) 
    {
        wartosc1 = x;
        cout << "Konstruktor (standardowy) z jednym argumentem" << endl;
    }

    ~struktura()
    { 
        cout << "Domyślny destruktor" << endl; 
    }
};

int main()
{
    setlocale(LC_CTYPE, "Polish");

    struktura obj1;               // Domyślny konstruktor
    struktura obj2 = { 42, 67 };  // Konstruktor (lista)
    struktura obj3(42);           // Konstruktor (klasyczny)

    return 0;
}
