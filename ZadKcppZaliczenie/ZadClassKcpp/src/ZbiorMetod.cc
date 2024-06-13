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
        cout << "B��dna metoda" << endl;
        break;
    }
}

void ZbiorMetod::WyswietlOpisMetody(int numerMetody) {
    switch (numerMetody)
    {
    case 1: //Metoda1
        cout << "Wypisuje na ekran 'Hello world' i 'B��d' z wykrozystaniem cout i cerr." << endl;
        cout << "Zapisuje do pliku out.txt pewien tekst, a nastepnie go odczytuje." << endl;
        cout << "W razie problemu wypisuje b��d z dost�pem do pliku." << endl;
        break;
    case 2: //Metoda2
        cout << "Prosi o wpisanie s�owa i je�eli s�owo znajduje si� w zestawie" << endl;
        cout << "znanych s��w, to wypisuje 'S�owo to 'xxx', a w przeciwnym" << endl;
        cout << "razie wypisuje 'Nieznane s�owo'." << endl;
        break;
    case 3: //Metoda3
        cout << "Prezentuje mechanizm union w j�zyku c++ wypisuj�c na" << endl;
        cout << "ekran spos�b dzia�ania tej funkcjonalno�ci oraz jakie jest" << endl;
        cout << "niebezpiecze�stwo u�ycia unii." << endl; 
        break;
    case 4: //Metoda4
        cout << "Program zamieniaj�cy wprowadzon� liczb� binarn� na liczbe dziesietn�" << endl;
        cout << "za pomoc� manipulacji bitami. Program przyjmuje z klawiatury liczb� 10 bitow�." << endl;
        break;
    case 5: //Metoda5
        cout << "Wykorzystuje r�ne sposoby sprawdzenia czy liczba jest parzysta:" << endl;
        cout << "1. Za pomoc� operatora przesuniecia;" << endl;
        cout << "2. Za pomoc� modulo;" << endl;
        cout << "3. Za pomoc� modulo z wykorzystaniem operatora warunkowego;" << endl;
        break;
    default:
        cout << "B��dna metoda" << endl;
        break;
    }
}

/* 
Metoda1 jest funkcj� wykonuj�c� dzia�ania zadania ZadCinCoutFile.cc
-Wypisuje na ekran Hello world. i B��d z wykrozystaniem cout i cerr.
-Zapisuje do pliku out.txt pewien tekst, a nastepnie go odczytuje
ewentualnie wypisuje b��d z dost�pem do pliku.
*/
void ZbiorMetod::Metoda1() {
    // Wypisywanie na ekran
    cout << "Hello world." << endl;

    // Zapisywanie do strumienia b��d�w
    cerr << "B��d" << endl;

    // Zapisywanie do pliku
    ofstream outFile("out.txt");
    if (outFile.is_open()) {
        outFile << "Lorem ipsum." << endl;
        outFile << "sit amet, consectetur adipiscing elit" << endl;
        outFile.close();
    }
    else {
        cerr << "Nie mo�na otworzy� pliku do zapisu." << endl;
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
        cerr << "Nie mo�na otworzy� pliku." << endl;
    }
}
/*
Metoda 2 jest funkcj� wykonuj�c� dzia��nia z zadania ZadSwitch.cc
-Prosi o wpisanie s�owa i je�eli s�owo znajduje si� w zestawie
rozpatrywanych s��w, to wypisuje "S�owo to 'xxx', a w przeciwnym
razie wypisuje "Nieznane s�owo"
*/

void ZbiorMetod::Metoda2() {
    string word;

    cout << "Podaj s�owo: ";
    cin >> word;

    switch_slowo(word);
}
/*
Metoda 3 jest funkcj� wykonuj�c� dzia�ania z zadania ZadUnia.cc
-Prezentuje mechanizm union w j�zyku c++ wypisuj�c na
ekran spos�b dzia�ania tej funkcjonalno�ci oraz jakie jest
niebezpiecze�stwo u�ycia unii.
*/
void ZbiorMetod::Metoda3() {
    UniaEuropejska unia;
    unia.Panstwo1 = 10;
    cout << "Jak wida� Panstwo1 z unii 'unia' istnieje: " << unia.Panstwo1 << endl;
    cout << "Gdy ustawimy warto�� w polu Panstwo2, to warto�� Panstwo1 przestanie przechowywa� nasz� warto��" << endl;
    unia.Panstwo2 = 2.2f;
    cout << "Panstwo1: " << unia.Panstwo1 << " Panstwo2: " << unia.Panstwo2 << endl;
    cout << "Unia pozwala przechowywa� dane w jednym obszarze danych, ale mo�e generowa� pewne problemy";
    cout << " zwi�zane z niejednoznacznym odczytem danych" << endl;
}
/*
Metoda 4 jest funkcj� wykonuj�c� dzia�ania z zadania
LBitoweOperatoryLogiczneSingleVariable.cc
Program zamieniaj�cy tablice 0,1 na liczbe dziesietn� 
za pomoc� manipulacji bitami.
*/
void ZbiorMetod::Metoda4() {
    // Tablica charow bo nie potrzebujemy nic wi�kszego, a fajnie
    // jest u�ywa� liczb ni� true/false w reprezentacji liczby binarnej.
    
    //Drobna zmiana aby liczba wpisywana by�a z klawiatury, bardziej interaktywne.
    /*char tablicaBulu[] = { 0,0,1,0,1,1,1,0,0,1 };*/
    string tekst;
    cout << "Podaj 10 cyfrow� liczbe binarn�" << endl;
    cin >> tekst;
    if (tekst.length() == 10)
    {
        char tablicaBulu[10];

        for (int i = 0; i < 10; ++i) {
            tablicaBulu[i] = tekst[i] - '0'; // Konwersja znaku '0' lub '1' na warto�� liczbow� 0 lub 1
        }

        cout << konwersjaBuluNaShortInt(tablicaBulu) << endl;
    }
    else {
        cout << "Poda�e� liczbe o z�ej d�ugo�ci" << endl;
    }

}
/*Metoda 5 jest funkcj� wykonuj�c� dzia�ania z zadania ZadParzysta.cc
Wykorzystuje r�ne sposoby sprawdzenia czy liczba jest parzysta
1. Za pomoc� operatora przesuniecia
2. Za pomoc� modulo
3. Za pomoc� modulo z wykorzystaniem operatora warunkowego
zamiast if else*/
void ZbiorMetod::Metoda5(short sposob) {
    short zadanie = sposob;
    //short liczba = 12;
    short liczba;
    cout << "Podaj liczb� od -32768 do 32767: ";
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
        cout << "B��dny numer metody" << endl;
        break;
    }
}