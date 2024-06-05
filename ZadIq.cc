#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    int tablica[] = { 10, 20, 30, 40, 50 };
    int i = 2; 
    int* q = tablica; // wskaźnik na tablicę (wskaźnik na pierwszy element tablicy)

    // Wskazanie elementu tablicy przez i[q] jest równoważne z użyciem *(q + i).
    // Ponieważ q wskazuje na początek tablicy, *(q + i) oznacza wartość znajdującą się
    // w tablicy na pozycji (q + i), czyli w przypadku int, *(q + i) oznacza tablica[i].

    // Przykład:
    cout << "Wartość na pozycji " << i << " tablicy: " << i[q] << endl;

    return 0;
}
