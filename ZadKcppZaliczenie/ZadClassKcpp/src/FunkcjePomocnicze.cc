#include "FunkcjePomocnicze.h"
/*Metoda2*/
int getWord(const string& word) { //Mapa wartosci
    if (word == "hello") return 1;
    if (word == "world") return 2;
    if (word == "example") return 3;
    if (word == "switch") return 4;
    if (word == "test") return 5;
    return -1; // Nieznane s這wo
}

void switch_slowo(const string& word) {
    switch (getWord(word)) {
    case 1:
        cout << "S這wo to 'hello'" << endl;
        break;
    case 2:
        cout << "S這wo to 'world'" << endl;
        break;
    case 3:
        cout << "S這wo to 'example'" << endl;
        break;
    case 4:
        cout << "S這wo to 'switch'" << endl;
        break;
    case 5:
        cout << "S這wo to 'test'" << endl;
        break;
    default:
        cout << "Nieznane s這wo" << endl;
        break;
    }
}

/*Metoda4*/
short konwersjaBuluNaShortInt(char* tablicaBulu) {
    // Program zamieniaj鉍y tablice 0,1 na liczbe dziesietn?za pomoc?manipulacji bitami
    // short bo nie potrzebujemy wiecej niz 2 bajty
    short liczba = 0;
    for (int pozycja = 0; pozycja < 10; pozycja++) {
        if (tablicaBulu[pozycja] == 0) {

            liczba &= ~(1 << 9 - pozycja);  // 9-pozycja poniewa?pozycja okre�la tablice, a
            // bity s?liczone od najmniej znacz鉍ego.
            // 
            // Je瞠li za pomoc?(1<<9-pozycja) ustawimy 1,
            // nast瘼nie zanegujemy t?liczbe ~ i damy modulo
            // to otrzymamy wyzerowanie na tej konkretnej pozycji.
        }
        else {

            liczba |= (1 << 9 - pozycja);   // Ustawienie 1 na bicie (pozycja)
            // 
            // Tutaj podobnie tylko 瞠 ustawiamy jedynke
            // i u篡wamy OR na naszej liczbie gdzie mo瞠 1 nie by?
            // oraz na tej gdzie jedynka jest tylko na interesuj鉍ym
            // nas miejscu
        }
    }
    return liczba;
}

/*Metoda 5*/
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