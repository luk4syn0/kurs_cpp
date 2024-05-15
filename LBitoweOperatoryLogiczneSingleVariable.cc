#include <iostream>
using namespace std;

short konwersjaBuluNaShortInt(char *tablicaBulu);

int main()
{
    // Tablica charow bo nie potrzebujemy nic większego, a fajnie
    // jest używać liczb niż true/false w reprezentacji liczby binarnej.
    char tablicaBulu[] = { 0,0,1,0,1,1,1,0,0,1 };
    konwersjaBuluNaShortInt(tablicaBulu);
}


short konwersjaBuluNaShortInt(char *tablicaBulu) {
    // Program zamieniający tablice 0,1 na liczbe dziesietną za pomocą manipulacji bitami
    // short bo nie potrzebujemy wiecej niz 2 bajty
    short liczba = 0;
    for (int pozycja = 0; pozycja < 10; pozycja++) {
        if (tablicaBulu[pozycja] == 0) {

            liczba &= ~(1 << 9 - pozycja);  // 9-pozycja ponieważ pozycja określa tablice, a
                                            // bity są liczone od najmniej znaczącego.
                                            // 
                                            // Jeżeli za pomocą (1<<9-pozycja) ustawimy 1,
                                            // następnie zanegujemy tę liczbe ~ i damy modulo
                                            // to otrzymamy wyzerowanie na tej konkretnej pozycji.
        }
        else {

            liczba |= (1 << 9 - pozycja);   // Ustawienie 1 na bicie (pozycja)
                                            // 
                                            // Tutaj podobnie tylko że ustawiamy jedynke
                                            // i używamy OR na naszej liczbie gdzie może 1 nie być
                                            // oraz na tej gdzie jedynka jest tylko na interesującym
                                            // nas miejscu
        }
    }
    cout << liczba << endl;
    return liczba;
}
