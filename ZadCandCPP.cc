#include <iostream>
#include <iomanip>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");
    
    //C
    printf("C\n");
    printf("%i\n", 19);
    printf("%x\n", 19);
    printf("%f\n", 19.0);
    double var = 19.0;
    printf("%f\n", var);
    printf("%9f\n", 3.0);
    printf("%11.3f\n", 3.1234);
    printf("Napis%f%c\n", 9.0, 'z');

    //C++
    cout << "C++" << endl;
    cout << 19 << endl;
    cout << hex << 19;
    cout << 19.0 << endl;
    cout << var << endl;
    cout << setw(11) << 19.0 << endl;
    cout << setw(11) << setprecision(3) << 7.0<<endl;
    cout << "Napis" << 9.0 << 'z'<<endl;

    return 0;
}
