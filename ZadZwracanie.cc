#include <locale.h>
#include <iostream>
using namespace std;

//Zadanie 2.1
//--------------------------------------
//Zadanie: Napisać program z czterema funkcjami z których każda zwraca inaczej :
//1. Przez wartość
//2. Przez referencje
//3. Przez wskaźnik
//4. Tablice(proszę się zastanowić o co tak naprawę chodzi)
//- nazwać program : ZadZwracanie.cc




int getRandomReturnValue() {
    int zmienna = rand() % 100;
    cout <<"1   Wartość w funkcji:   " << zmienna << endl;
    return zmienna;
}

int& getRandomReturnReference() {
    int zmienna= rand() % 100;
    int& referencja=zmienna;
    cout << "2.1 Referencja w funkcji:    " << zmienna << endl;
    return referencja;
}

int& getRandomReturnReferenceDobra() { 
    //Jeżeli nie użyjemy przekazania adresu do obiektu w funkcji i do tego adresu nie zrobimy odwołania,
    //a zamiast tego użyjemy referencję do zmiennej lokalnej, to w momencie wypisywania otrzymamy
    //wartość do czegoś co chyba jest czyszczone z pamięci, ale może źle to rozumiem.

    int* zmienna = new int; //Używam new, aby nie została zniszczona po zakończeniu funkcji
    int& referencja = *zmienna;
    *zmienna = rand() % 100;
    cout << "2.2 Referencja dobra w funkcji:   " << *zmienna << endl;
    return referencja;
}

int* getRandomReturnPointer() {
    int* t = new int; //Używam new, aby nie została zniszczona po zakończeniu funkcji
    *t = rand() % 100;
    cout << "3   Pointer w funkcji:   " << t << endl;
    return t;
}

int* getRandomReturnArray() {
    //W cpp podanie listy t[10] dziesięciu elementów jako t, rozumiane jest jako wskaźnik na pierwszy element, a więc
    //myślę że można to zrobić w ten sposób.

    int* t = new int[1]; //Używam new, aby nie została zniszczona po zakończeniu funkcji
    t[0] = rand() % 100;
    cout << "4   Tablica w funkcji:   " << t << endl;
    return t;
}


int main()
{
    setlocale(LC_CTYPE, "Polish");
    srand(time(NULL)); //ustawiam seed do rand()


    cout << "1   Wartość w wywołaniu: " << getRandomReturnValue() << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "2.1 Referencja w wywołaniu: "<<getRandomReturnReference() << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "2.2 Referencja dobra w wywołaniu: " << getRandomReturnReferenceDobra() << endl;
    cout << "-----------------------------------------------" << endl;
    int *pointer = getRandomReturnPointer();
    cout << "3   Pointer w wywołaniu: " << pointer <<", -> " << *pointer  << endl;
    cout << "-----------------------------------------------" << endl;
    int* tablica = getRandomReturnArray();
    cout << "4   Tablica w wywołaniu: " << tablica<< ", -> " << *tablica << endl;
    cout << "-----------------------------------------------" << endl;

}

