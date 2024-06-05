#include <iostream>
#include <locale.h>
#include <sstream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    // Tworzę strumień
    stringstream ss;

    // Dodaję różne dane do strumienia
    int num = 400;
    double value = 2.71;
    string text = "Tekścior";
    ss << "Liczba: " << num << ", Wartość: " << value << ", Tekst: " << text;

    // Pobieram zawartość strumienia jako jeden ciąg
    string result = ss.str();

    cout << "Zawartość strumienia: " << result << endl;

    return 0;
}
