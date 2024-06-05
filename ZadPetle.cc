#include <iostream>
#include <locale.h>
using namespace std;

void while_example() {
    int i = 0;
    cout << "Pętla while z post-inkrementacją i++:" << endl;
    while (i < 10) {
        cout << "Przed inkrementacją: i = " << i << endl;
        if (i == 5) {
            cout << "Przerywam pętlę na i == 5" << endl;
            break;
        }
        cout << "Po inkrementacji: i = " << i++ << endl; // Post-inkrementacja
    }

    i = 0;
    cout << "\nPętla while z pre-inkrementacją ++i:" << endl;
    while (i < 10) {
        cout << "Przed inkrementacją: i = " << i << endl;
        if (i == 5) {
            cout << "Przerywam pętlę na i == 5" << endl;
            break;
        }
        cout << "Po inkrementacji: i = " << ++i << endl; // Pre-inkrementacja
    }
}

void do_while_example() {
    int i = 0;
    cout << "Pętla do-while z post-inkrementacją i++:" << endl;
    do {
        cout << "Przed inkrementacją: i = " << i << endl;
        if (i == 5) {
            cout << "Przerywam pętlę na i == 5" << endl;
            break;
        }
        cout << "Po inkrementacji: i = " << i++ << endl; // Post-inkrementacja
    } while (i < 10);

    i = 0;
    cout << "\nPętla do-while z pre-inkrementacją ++i:" << endl;
    do {
        cout << "Przed inkrementacją: i = " << i << endl;
        if (i == 5) {
            cout << "Przerywam pętlę na i == 5" << endl;
            break;
        }
        cout << "Po inkrementacji: i = " << ++i << endl; // Pre-inkrementacja
    } while (i < 10);
}

void for_example() {
    cout << "Pętla for z post-inkrementacją i++:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Przed inkrementacją: i = " << i << endl;
        if (i == 5) {
            cout << "Przerywam pętlę na i == 5" << endl;
            break;
        }
        cout << "Po inkrementacji: i = " << i << endl; // Post-inkrementacja w for
    }

    cout << "\nPętla for z pre-inkrementacją ++i:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Przed inkrementacją: i = " << i << endl;
        if (i == 5) {
            cout << "Przerywam pętlę na i == 5" << endl;
            break;
        }
        cout << "Po inkrementacji: i = " << i << endl; // Pre-inkrementacja w for
    }
}


int main()
{
    setlocale(LC_CTYPE, "Polish");
    while_example();
    cout << endl;
    do_while_example();
    cout << endl;
    for_example();
    return 0;
}
