#include <iostream>
#include <locale.h>
using namespace std;

class PrzykladowaKlasa
{
public:
    PrzykladowaKlasa() {};
    ~PrzykladowaKlasa() {};

    int publicznaZmienna = 1;

    void WywolajMetodeB() {
        MetodaB();
    };

    int UzyjMetodyC() {
        return MetodaC();
    }

    inline int dodaj(int, int);

protected:

    int chronionaZmienna = 2;

    void MetodaB() {
        cout << "Metoda B"<< endl;
    };


private:
    int prywatnaZmienna = 3;
    int MetodaC();
    
};

int PrzykladowaKlasa::MetodaC() {
    return -1;
};

inline int PrzykladowaKlasa::dodaj(int a, int b) {
    return a + b;
}


int main()
{
    setlocale(LC_CTYPE, "Polish");

    cout << "Wywołanie funkcji z sekcji protected i private z pomocą funkcji public" << endl;
    PrzykladowaKlasa przykladowaInstancjaKlasy;
    cout << "Wywołanie funkcji z private: " << przykladowaInstancjaKlasy.UzyjMetodyC() << endl;
    cout << "Wywołanie funkcji z protected: ";
    przykladowaInstancjaKlasy.WywolajMetodeB();

    int a = 20;
    int b = 30;
    cout << "Inline: " << przykladowaInstancjaKlasy.dodaj(a, b);
    
    return 0;
}
