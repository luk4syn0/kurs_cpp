#include <iostream>
#include <locale.h>
using namespace std;


int main()
{
    //Ustawiamy polski język dla konsoli, bo bazowo nie lubi polskich znaków
    setlocale(LC_CTYPE, "Polish");

    //ENUM UNSCOPED
    cout << "Przykładowe wykorzystanie enum unscoped" << endl;
    //Deklarujemy unscoped enum poniżej, przypisujemy pierwszemu z miesięcy odpowiadający mu numer - 1, inaczej numeracja wystąpi od 0
    enum Miesiace {Styczen=1, Luty, Marzec, Kwiecien, Maj, Czerwiec, Lipiec, Sierpien, Wrzesien, Pazdziernik, Listopad, Grudzien};

    int kw = Kwiecien;
    cout << "Kwiecień: " << kw << endl;

    int mj = Maj;
    cout << "Maj: " << mj << endl;

    int gr = Grudzien;
    cout << "Grudzień: " << gr << endl;

    //ENUM SCOPED 
    //Deklaruje scoped enum poniżej, odbywa się to z pomocą dodania class między nazwę a enum.
    enum class Miesiace_scoped {Styczen = 1, Luty, Marzec, Kwiecien, Maj, Czerwiec, Lipiec, Sierpien, Wrzesien, Pazdziernik, Listopad, Grudzien};
    cout << "\nEnum Scoped: " << endl;
    //Miesiace_scoped cz = Miesiace_scoped::Czerwiec;  // <-- Przypisanie wartości wykorzystuje podanie odpowiedniej klasy i nie zaśmieca to przestrzeni globalnej
                                                     //Natomiast jest to typowanie silne i przypisanie zmiennej do int na nic się nie zda więc należy użyć static_cast.

    int cz = static_cast<int>(Miesiace_scoped::Czerwiec);

    cout << "Czerwiec: " << cz << endl;

    
}

