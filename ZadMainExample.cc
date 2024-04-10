#include <iostream>
#include <locale.h>
using namespace std;

//Zadanie 1.3
//--------------------------------------
//Napisać program który zawiera :
//-funkcję main
//- 5 innych funkcji, z czego dwie zadeklarowane jako : extern "C"
//- dodatkowo do wykonania w późniejszej cześci kursu : wywołując program decydujemy, które z funkcji mają zostać wykonane przez podanie tego w liście argumentów przekazanych do funkcji main
//- nazwać program : ZadMainExample.cc

//Funkcje extern
extern "C" {
    void funkcjaE1();
    void funkcjaE2();
}

// Definicje funkcji extern "C"
void funkcjaE1() {
    cout << "Funkcja extern 1" << endl;
}

void funkcjaE2() {
    cout << "Funkcja extern 2" << endl;
}

// Definicje pozostałych funkcji
void funkcja1() {
    cout << "Funkcja zwykła 1" << endl;
}

void funkcja2() {
    cout << "Funkcja zwykła 2" << endl;
}

void funkcja3() {
    cout << "Funkcja zwykła 3" << endl;
}

// Główna funkcja programu
int main() {
    //Ustawiamy polski język dla konsoli, bo bazowo nie lubi polskich znaków
    setlocale(LC_CTYPE, "Polish");
    funkcjaE1();
    funkcjaE2();
    funkcja1();
    funkcja2();
    funkcja3();
    return 0;
}