// ZadArytmetykaWskaznikow.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <locale.h>
#include <format>
#include <string>
using namespace std;

void Funkcja1();
void Funkcja2();

int main()
{
    setlocale(LC_CTYPE, "Polish");
    Funkcja1();
    Funkcja2();
    return 0;
}

void Funkcja1() {
    int tablica[] = { 10,20,30,40,50,60,70 };
    int* p = tablica;

    cout << "1. Przykład użycia p++" << endl;
    cout << "Używam p++:  " << p++ << endl; //p++
    cout << "p po użyciu: " << p << endl;
    cout << "Wskaźnik został zwiekszony dopiero po wypisaniu p.\n" << endl;

    cout << "2. Przykład użycia ++p" << endl;
    cout << "Używam ++p:  " << ++p << endl; //++p
    cout << "p po użyciu: " << p << endl;
    cout << "Wskaźnik został zwiekszony przed wypisaniem p.\n" << endl;

    cout << "3. Przykład użycia ++*p" << endl;
    cout << "*p wynosi: " << *p << endl;
    cout << "Używam ++*p:  " << ++ * p << endl; //++*p
    cout << "*p po użyciu: " << *p << endl;
    cout << "++*p zwraca wartość z tablicy na którą wskazuje p dopiero po zwiększeniu jej o 1\n" << endl;

    cout << "4. Przykład użycia *p++" << endl;
    cout << "*p wynosi: " << *p << endl;
    cout << "Używam *p++:  " << *p++ << endl; //*p++
    cout << "*p po użyciu: " << *p << endl;
    cout << "*p++ zwraca wartość z tablicy na którą wskazuje p, a dopiero po tym działaniu ";
    cout << "przesuwa wskaźnik na kolejne miejsce tablicy\n" << endl;

    cout << "5. Przykład użycia ++(*p)" << endl;
    cout << "*p wynosi: " << *p << endl;
    cout << "Używam ++(*p):  " << ++(*p) << endl; //++(*p)
    cout << "*p po użyciu: " << *p << endl;
    cout << "++(*p) działa tak samo jak ++*p\n" << endl;

    cout << "6. Przykład użycia ++*(p)" << endl;
    cout << "*p wynosi: " << *p << endl;
    cout << "Używam ++*(p):  " << ++ * (p) << endl; //++*(p)
    cout << "*p po użyciu: " << *p << endl;
    cout << "++*(p) działa tak samo jak ++*p i ++(*p)\n" << endl;

    cout << "7. Przykład użycia (*p)++" << endl;
    cout << "*p wynosi: " << *p << endl;
    cout << "Używam (*p)++:  " << (*p)++ << endl; //(*p)++
    cout << "*p po użyciu: " << *p << endl;
    cout << "(*p)++ najpierw wypisuje wartość z tablicy na ktorą wskazuje p";
    cout << "a później zwiększa jej wartość\n" << endl;

    cout << "8. Przykład użycia *(p)++" << endl;
    cout << "*p wynosi: " << *p << endl;
    cout << "Używam *(p)++:  " << *(p)++ << endl; //(*(p)++
    cout << "*p po użyciu: " << *p << endl;
    cout << "*(p)++ najpierw wypisuje wartość z tablicy na ktorą wskazuje p";
    cout << "a później przesuwa wskaźnik na kolejne miejsce\n" << endl;

    cout << "9. Przykład użycia *++p" << endl;
    cout << "*p wynosi: " << *p << endl;
    cout << "Używam *++p:  " << *++p << endl; //*++p
    cout << "*p po użyciu: " << *p << endl;
    cout << "*++p najpierw przesuwa wskaźnik na następny element";
    cout << "a następnie zwraca wartość z tablicy na którą wskazuje\n" << endl;

    cout << "10. Przykład użycia *(++p)" << endl;
    cout << "*p wynosi: " << *p << endl;
    cout << "Używam *(++p):  " << *(++p) << endl; //*(++p)
    cout << "*p po użyciu: " << *p << endl;
    cout << "*(++p) działa dokładnie tak samo jak powyższe *++p\n" << endl;
}

void Funkcja2() {
    int a = 0, b = 0, c = 0;
    int* wsk_int;
    for (int i = 1; i < 11; i++) {

        switch (i)
        {
        case 2:
            wsk_int = &b;
            *wsk_int = 10;
            break;
        case 3:
            wsk_int = &c;
            *wsk_int = 20;
            break;
        case 4:
            wsk_int = &b;
            *wsk_int = 30;
            break;
        case 5:
            wsk_int = &a;
            *wsk_int = 40;
            break;
        case 6:
            wsk_int = &b;
            *wsk_int = 50;
            break;
        case 7:
            wsk_int = &c;
            *wsk_int = 60;
            break;
        case 8:
            wsk_int = &b;
            *wsk_int = 70;
            break;
        case 9:
            wsk_int = &a;
            *wsk_int = 80;
            break;
        case 10:
            wsk_int = &b;
            *wsk_int = 90;
            break;
        }

        cout << format("{:<6}", to_string(i) + ".");
        cout << "A, B, C: " << format("{:<2}", a) << " " << format("{:<2}", b) << " " << format("{:<2}", c) << endl;

    }
}
