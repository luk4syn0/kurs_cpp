#include <iostream>
#include <fstream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    // Wypisywanie na ekran
    cout << "Hello world." << endl;

    // Zapisywanie do strumienia błędów
    cerr << "Błąd" << endl;

    // Zapisywanie do pliku
    ofstream outFile("out.txt");
    if (outFile.is_open()) {
        outFile << "Lorem ipsum." << endl;
        outFile << "sit amet, consectetur adipiscing elit" << endl;
        outFile.close();
    }
    else {
        cerr << "Nie można otworzyć pliku do zapisu." << endl;
    }

    // Odczytywanie z pliku
    ifstream inFile("out.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << "Odczytano z pliku: " << line << endl;
        }
        inFile.close();
    }
    else {
        cerr << "Nie można otworzyć pliku." << endl;
    }

    return 0;
}
