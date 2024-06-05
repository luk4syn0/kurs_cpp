#include <iostream>
#include <locale.h>
using namespace std;

// (a) Definiowanie i użycie makra

#define PI 3.14159

// (b) Użycie '#' i '##'

#define STRINGIFY(x) #x
#define CONCAT(a, b) a ## b

// Definiowanie preprocesora do warunkowego kompilowania

#define DEBUG

int main()
{
    setlocale(LC_CTYPE, "Polish");

    // (a) Użycie makra

    cout << "Wartość PI: " << PI << endl;

    // (b) Użycie '#' i '##'
    int xy = 100;
    cout << "Uzycie # na zmiennej STRINGIFY(PI): " << STRINGIFY(PI) << endl;
    cout << "Uzycie zmiennej xy -> CONCAT(x, y): " << CONCAT(x, y) << endl;

    // Przykład użycia #ifdef i #ifndef

    #ifdef DEBUG
        cout << "Tryb debugowania jest włączony." << endl;
    #else
        cout << "Tryb debugowania jest wyłączony." << endl;
    #endif

    #ifndef LINUX_OS
        cout << "Opcje dla innych systemów" << endl;
    #endif

    #undef PI

    cout << "Bez preprocesora" << endl;
    // (a) Bez użycia makra
    const double PI = 3.14159;
    cout << "Wartość PI: " << PI << endl;

    // (b) Bez użycia # i ##
    
    return 0;
}
