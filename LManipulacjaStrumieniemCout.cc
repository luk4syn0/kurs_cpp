#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;




int main()
{
    setlocale(LC_CTYPE, "Polish");

    // Wartości x.xxxx i x.xxx
    float x1 = 123.4567f;
    float x2 = 12.3456f;

    
    cout << fixed << setprecision(4);

    cout << "Wynika naszego działania: " << x1 << " jest niepoprawny ale:" << endl;
    cout << fixed << setprecision(3);
    cout << "   " << setw(9) << left << "output:" << setw(10) << right << x2 << "  T: " << x1 << endl;

    
    float w = 16.0f;
    float average = (x1 + x2) / w;

    
    cout << setprecision(4);

    cout << "   " << setw(10) << left << "output1:" << setw(10) << right << x2 << " T: " << x1 << endl;

    cout << fixed << setprecision(1);
    cout << setw(6) << left << "   float w =" << setw(8) << right << w << ";" << endl;
    cout << fixed << setprecision(4);
    cout << "   " << setw(10) << left << "output2:" << setw(10) << right << x2 << " T: " << x1 << endl;
    cout << "   "setfill('-') << setw(35) << "-" << setfill(' ') << endl;
    cout << "   " << setw(10) << left << "average:" << setw(10) << right << average << " T: " << x1 << endl;

    return 0;
}
