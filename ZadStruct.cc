#include <iostream>
#include <locale.h>
using namespace std;


//Deklaracja struktury
struct samochod {
    int rokProdukcji;
    int przebieg;
    int cena;
    int numerPodwozia;
    string marka;
    string model;

    //Jesteśmy w stanie stworzyć konstruktor 'standardowy' jak i używając listy inicjalizacyjnej
    //Ważne jest zdefiniowanie przypadków konstruktora (bedzie on wtedy działał tylko dla zdefioniowanej ilości argumentów)
    //samochod(ARGUMENTY) {argument1 = wartosc1, itd...}
    //samochod(ARGUMENTY): argument1(wartosc1), itd... {}

   

} S0000003 = {20011,240560,45000,000000000000000000000, "Seat", "Ibiza" };


int main()
{
    setlocale(LC_CTYPE, "Polish");

    //Utworzenie obiektu
    samochod S0000001;

    //Ustawianie wartości sposob 1.
    S0000001.rokProdukcji = 1999;
    S0000001.przebieg = 140221;
    S0000001.cena = 32000;
    S0000001.numerPodwozia = 000000000000000000000;
    S0000001.marka = "Mercedes - Benz";
    S0000001.model = "C180";

    //Ustawienie wartości sposób 2.
    samochod S0000002 = {1989,440210,4000,000000000000000000000, "Opel", "Jakiś"};
    
    cout << "Model obiektu 1. " << S0000001.model << endl;

    cout << "Marka obiektu 2. " << S0000002.marka << endl;

    cout << "Przebieg obiektu 3. " << S0000003.przebieg << endl;
    cout << "Kręcimy licznik" << endl;
    S0000003.przebieg = S0000003.przebieg - 120000;
    cout << "Przebieg obiektu 3. po przekręceniu licznika " << S0000003.przebieg << endl;
    return 0;
}
