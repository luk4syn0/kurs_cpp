// ZadArytmetykaWskaznikowTablica2D.cc.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <locale.h>
using namespace std;


/* Zadanie 3.3 (LArytmetykaWskaznikowTablice.cc)
 -------------------------------------
 Pokazać w jakiej kolejności jest adresowana tablica dwuwymiarowa (Tab[3][3]).
 Wypisać adresy poszczególnych elementów.
 - nazwać program: ZadArytmetykaWskaznikowTablica2D.cc */

int main()
{
    setlocale(LC_CTYPE, "Polish");
    int Tab[3][3] = {{ 1, 2, 3 }, 
                     { 4, 5, 6 }, 
                     { 7, 8, 9 } };

    for (int i = 0; i < 3; i++) {
        for (int y = 0; y<3; y++)
            cout << Tab[i][y] << " na adresie: " << &Tab[i][y] << endl;
    }
    /*  Przykładowy wynik:
    * 
        1 na adresie: 0000005D42BAFC68
        2 na adresie: 0000005D42BAFC6C
        3 na adresie: 0000005D42BAFC70
        4 na adresie: 0000005D42BAFC74
        5 na adresie: 0000005D42BAFC78
        6 na adresie: 0000005D42BAFC7C
        7 na adresie: 0000005D42BAFC80
        8 na adresie: 0000005D42BAFC84
        9 na adresie: 0000005D42BAFC88

        Tablica dwuwymiarowa jest adresowana wiersz po wierszu.
        Dla 3x3 wygląda to tak:
        4 bajty -> 4 bajty -> 4 bajty --nowy_wiersz--> 4 bajty -> 4 bajty itd...*/

}