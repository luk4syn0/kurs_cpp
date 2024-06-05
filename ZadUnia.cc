#include <iostream>
#include <locale.h>
using namespace std;

union UniaEuropejska
{
    int Panstwo1;
    float Panstwo2;
    double Panstwo3;
} unia;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    unia.Panstwo1 = 10;
    cout << "Jak widać Panstwo1 z unii 'unia' istnieje: " << unia.Panstwo1 << endl;
    cout << "Gdy ustawimy wartość w polu Panstwo2, to wartość Panstwo1 przestanie przechowywać naszą wartość" << endl;
    unia.Panstwo2 = 2.2;
    cout << "Panstwo1: " << unia.Panstwo1 << " Panstwo2: " << unia.Panstwo2 << endl;
    cout << "Unia pozwala przechowywać dane w jednym obszarze danych, ale może generować pewne problemy";
    cout << " związane z niejednoznacznym odczytem danych" << endl;

    return 0;
}
