#include <iostream>
#include <locale.h>
using namespace std;

int getWord(const string& word) { //Mapa wartosci
    if (word == "hello") return 1;
    if (word == "world") return 2;
    if (word == "example") return 3;
    if (word == "switch") return 4;
    if (word == "test") return 5;
    return -1; // Nieznane słowo
}

void switch_slowo(const string& word) {
    switch (getWord(word)) {
    case 1:
        cout << "Słowo to 'hello'" << endl;
        break;
    case 2:
        cout << "Słowo to 'world'" << endl;
        break;
    case 3:
        cout << "Słowo to 'example'" << endl;
        break;
    case 4:
        cout << "Słowo to 'switch'" << endl;
        break;
    case 5:
        cout << "Słowo to 'test'" << endl;
        break;
    default:
        cout << "Nieznane słowo" << endl;
        break;
    }
}

int main()
{
    setlocale(LC_CTYPE, "Polish");

    string word;

    cout << "Podaj słowo: ";
    cin >> word;

    switch_slowo(word);


    return 0;
}
