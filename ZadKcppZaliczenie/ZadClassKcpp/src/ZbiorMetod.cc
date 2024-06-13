#include "ZbiorMetod.h"
#include "FunkcjePomocnicze.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ZbiorMetod::ZbiorMetod() {}
ZbiorMetod::~ZbiorMetod() {}

void ZbiorMetod::WywolajMetode(int numerMetody){
    switch (numerMetody)
    {
    case 1:
        Metoda1();
        break;
    case 2:
        Metoda2();
        break;
    case 3:
        Metoda3();
        break;
    case 4:
        Metoda4();
        break;
    case 5:
        Metoda5(1);
        break;
    case 6:
        Metoda5(2);
        break;
    case 7: 
        Metoda5(3);
        break;
    default:
        cout << "B³êdna metoda" << endl;
        break;
    }
}

void ZbiorMetod::WyswietlOpisMetody(int numerMetody) {
    switch (numerMetody)
    {
    case 1: //Metoda1
        cout << "Wypisuje na ekran 'Hello world' i 'B³¹d' z wykrozystaniem cout i cerr." << endl;
        cout << "Zapisuje do pliku out.txt pewien tekst, a nastepnie go odczytuje." << endl;
        cout << "W razie problemu wypisuje b³¹d z dostêpem do pliku." << endl;
        break;
    case 2: //Metoda2
        cout << "Prosi o wpisanie s³owa i je¿eli s³owo znajduje siê w zestawie" << endl;
        cout << "znanych s³ów, to wypisuje 'S³owo to 'xxx', a w przeciwnym" << endl;
        cout << "razie wypisuje 'Nieznane s³owo'." << endl;
        break;
    case 3: //Metoda3
        cout << "Prezentuje mechanizm union w jêzyku c++ wypisuj¹c na" << endl;
        cout << "ekran sposób dzia³ania tej funkcjonalnoœci oraz jakie jest" << endl;
        cout << "niebezpieczeñstwo u¿ycia unii." << endl; 
        break;
    case 4: //Metoda4
        cout << "Program zamieniaj¹cy wprowadzon¹ liczbê binarn¹ na liczbe dziesietn¹" << endl;
        cout << "za pomoc¹ manipulacji bitami. Program przyjmuje z klawiatury liczbê 10 bitow¹." << endl;
        break;
    case 5: //Metoda5
        cout << "Wykorzystuje ró¿ne sposoby sprawdzenia czy liczba jest parzysta:" << endl;
        cout << "1. Za pomoc¹ operatora przesuniecia;" << endl;
        cout << "2. Za pomoc¹ modulo;" << endl;
        cout << "3. Za pomoc¹ modulo z wykorzystaniem operatora warunkowego;" << endl;
        break;
    default:
        cout << "B³êdna metoda" << endl;
        break;
    }
}

/* 
Metoda1 jest funkcj¹ wykonuj¹c¹ dzia³ania zadania ZadCinCoutFile.cc
-Wypisuje na ekran Hello world. i B³¹d z wykrozystaniem cout i cerr.
-Zapisuje do pliku out.txt pewien tekst, a nastepnie go odczytuje
ewentualnie wypisuje b³¹d z dostêpem do pliku.
*/
void ZbiorMetod::Metoda1() {
    // Wypisywanie na ekran
    cout << "Hello world." << endl;

    // Zapisywanie do strumienia b³êdów
    cerr << "B³¹d" << endl;

    // Zapisywanie do pliku
    ofstream outFile("out.txt");
    if (outFile.is_open()) {
        outFile << "Lorem ipsum." << endl;
        outFile << "sit amet, consectetur adipiscing elit" << endl;
        outFile.close();
    }
    else {
        cerr << "Nie mo¿na otworzyæ pliku do zapisu." << endl;
    }

    // Odczytywanie z pliku
    ifstream inFile("out.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << "Odczytano z pliku: " << line << endl;
        }
        inFile.close();
    }
    else {
        cerr << "Nie mo¿na otworzyæ pliku." << endl;
    }
}
/*
Metoda 2 jest funkcj¹ wykonuj¹c¹ dzia³¹nia z zadania ZadSwitch.cc
-Prosi o wpisanie s³owa i je¿eli s³owo znajduje siê w zestawie
rozpatrywanych s³ów, to wypisuje "S³owo to 'xxx', a w przeciwnym
razie wypisuje "Nieznane s³owo"
*/

void ZbiorMetod::Metoda2() {
    string word;

    cout << "Podaj s³owo: ";
    cin >> word;

    switch_slowo(word);
}
/*
Metoda 3 jest funkcj¹ wykonuj¹c¹ dzia³ania z zadania ZadUnia.cc
-Prezentuje mechanizm union w jêzyku c++ wypisuj¹c na
ekran sposób dzia³ania tej funkcjonalnoœci oraz jakie jest
niebezpieczeñstwo u¿ycia unii.
*/
void ZbiorMetod::Metoda3() {
    UniaEuropejska unia;
    unia.Panstwo1 = 10;
    cout << "Jak widaæ Panstwo1 z unii 'unia' istnieje: " << unia.Panstwo1 << endl;
    cout << "Gdy ustawimy wartoœæ w polu Panstwo2, to wartoœæ Panstwo1 przestanie przechowywaæ nasz¹ wartoœæ" << endl;
    unia.Panstwo2 = 2.2f;
    cout << "Panstwo1: " << unia.Panstwo1 << " Panstwo2: " << unia.Panstwo2 << endl;
    cout << "Unia pozwala przechowywaæ dane w jednym obszarze danych, ale mo¿e generowaæ pewne problemy";
    cout << " zwi¹zane z niejednoznacznym odczytem danych" << endl;
}
/*
Metoda 4 jest funkcj¹ wykonuj¹c¹ dzia³ania z zadania
LBitoweOperatoryLogiczneSingleVariable.cc
Program zamieniaj¹cy tablice 0,1 na liczbe dziesietn¹ 
za pomoc¹ manipulacji bitami.
*/
void ZbiorMetod::Metoda4() {
    // Tablica charow bo nie potrzebujemy nic wiêkszego, a fajnie
    // jest u¿ywaæ liczb ni¿ true/false w reprezentacji liczby binarnej.
    
    //Drobna zmiana aby liczba wpisywana by³a z klawiatury, bardziej interaktywne.
    /*char tablicaBulu[] = { 0,0,1,0,1,1,1,0,0,1 };*/
    string tekst;
    cout << "Podaj 10 cyfrow¹ liczbe binarn¹" << endl;
    cin >> tekst;
    if (tekst.length() == 10)
    {
        char tablicaBulu[10];

        for (int i = 0; i < 10; ++i) {
            tablicaBulu[i] = tekst[i] - '0'; // Konwersja znaku '0' lub '1' na wartoœæ liczbow¹ 0 lub 1
        }

        cout << konwersjaBuluNaShortInt(tablicaBulu) << endl;
    }
    else {
        cout << "Poda³eœ liczbe o z³ej d³ugoœci" << endl;
    }

}
/*Metoda 5 jest funkcj¹ wykonuj¹c¹ dzia³ania z zadania ZadParzysta.cc
Wykorzystuje ró¿ne sposoby sprawdzenia czy liczba jest parzysta
1. Za pomoc¹ operatora przesuniecia
2. Za pomoc¹ modulo
3. Za pomoc¹ modulo z wykorzystaniem operatora warunkowego
zamiast if else*/
void ZbiorMetod::Metoda5(short sposob) {
    short zadanie = sposob;
    //short liczba = 12;
    short liczba;
    cout << "Podaj liczbê od -32768 do 32767: ";
    cin >> liczba;
    cout << endl;

    switch (zadanie)
    {
    case 1:
        czyParzystaMod(liczba);
        break;
    case 2:
        czyParzystaWarunkowy(liczba);
        break;
    case 3:
        czyParzystaBin(liczba);
        break;
    default:
        cout << "B³êdny numer metody" << endl;
        break;
    }
}