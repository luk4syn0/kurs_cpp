#include <iostream>
#include <locale.h>
using namespace std;

/* Zadanie podczas zajęć
   *   Napisz funkcje (osobny program) w którym zadeklarujesz string i uzyjesz na nim funkcji manipulacyjnych:
   *   1. empty() 	Zwraca wartość true jeżeli napis jest pusty.
   *   2. size(),length() 	Zwraca ilość znaków w napisie.
   *   3. at() 	Zwraca znak o podanym położeniu, tak jak operator [], z tym że ta metoda jest bezpieczniejsza - wyrzuca wyjątek w przypadku wyjścia poza zakres stringa.
   *   4. clear() 	Usuwa wszystkie znaki z napisu.
   *   5. erase(...) 	Usuwa wybrane znaki.
   *   6. find(...) 	Znajduje podciąg w ciągu, są też bardziej rozbudowane funkcje tego typu.
   *   7. swap(...) 	Zamienia miejscami dwa stringi, a staje się b, a b staje się a.
   *   8. substr(...) 	Zwraca podciąg na podstawie indeksu początkowego i długości podciągu.
   *   9. append(...) */

void przykladoweOperacje(string napis, int indeksZnakuDoWypisania, string podciagDoZnalezienia, int znakiDoUsunieciaIdx1, int znakiDoUsunieciaIdx2, string stringDoZamiany, int idx1, int idx2) {
    //EMPTY()
    cout << "Czy napis: " + napis + " jest pusty? ";
    cout << (napis.empty() ? "Tak" : "Nie") << endl;

    //SIZE()
    cout << "Rozmiar: " << napis.size() << endl;

    //AT()
    cout << "Na indeksie " << indeksZnakuDoWypisania <<" jest znak '" << napis.at(indeksZnakuDoWypisania) << "'" << endl;

    //FIND()
    size_t found = napis.find(podciagDoZnalezienia);
    if (found != string::npos) {
        cout << "Podciąg znaleziony zaczyna się na indeksie: " << found << endl;
    }
    else {
        cout << "Podciąg nie został znaleziony" << endl;
    }

    //SWAP()
    cout << "Zamieniam dwa napisy a: " + napis + ", b: " + stringDoZamiany + " wynik -> a: ";
    napis.swap(stringDoZamiany);
    cout << napis + ", b: " + stringDoZamiany << endl;
    napis.swap(stringDoZamiany); //powrót do napisu głównego

    //SUBSTR()
    cout << "Zwracam podciąg zaczynający się na indeksie: " << idx1 << " i kończący się na indeksie: " << idx2 << " --> " << napis.substr(idx1, idx2) << endl;

    //APPEND()
    cout << "Dodaje inny napis do napisu głównego -> " + napis.append(stringDoZamiany) << endl;

    //ERASE()
    cout << "Usuwam znaki od pozycji: " << znakiDoUsunieciaIdx1 << " do pozycji: "<< znakiDoUsunieciaIdx2 <<" wynik tej operacji - " << napis + " --> " << napis.erase(znakiDoUsunieciaIdx1, znakiDoUsunieciaIdx2) << endl;

    //CLEAR()
    cout << "Czyszcze napis i wypisuję: "; 
    napis.clear();
    cout << napis << endl;
    return;
}


int main(){
    setlocale(LC_CTYPE, "Polish");
    przykladoweOperacje("Pole", 1,"ole",2, 4,"Dwór",0,2);
}
