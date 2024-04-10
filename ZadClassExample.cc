#include <iostream>
#include <locale.h>
using namespace std;


class DigitalPicture
{
    public:
        /** Domyślny konstruktor **/
        DigitalPicture() {
            //Wartości domyślne:
            fauthor = "";
            fheight = 0;
            fwidth = 0;
            fsize = 0;
            freadable = false;
            fwritable = false;
        };

        /** Domyślny destruktor **/
        ~DigitalPicture() {};

        /** Settery **/
        void SetAuthor(string authorName) { fauthor = authorName; };
        void SetHeight(int height) { fheight = height; };
        void SetWidth(int width) { fwidth = width; };
        void SetSize(int size) { fsize = size; };
        void SetReadable(bool readable) { freadable = readable; };
        void SetWritable(bool writable) { fwritable = writable; };

        /** Gettery **/
        string GetAuthor() { return fauthor; };
        int GetHeight() { return fheight; };
        int GetWidth() { return fwidth; };
        int Getsize() { return fsize; };
        bool GetReadable() { return freadable; };
        bool GetWritable() { return fwritable; };

        void Print() {
            cout << "Autor: " << fauthor << endl;
            cout << "Wysokość: " << fheight << " pikseli" << endl;
            cout << "Szerokość: " << fwidth << " pikseli" << endl;
            cout << "Rozmiar: " << fsize << " bajtów" << endl;
            cout << "Czytelność: " << (freadable ? "Tak" : "Nie") << endl;
            cout << "Zapisywalność: " << (fwritable ? "Tak" : "Nie") << endl;
        };

    private:
        string fauthor;
        int fheight;
        int fwidth;
        int fsize;
        bool freadable;
        bool fwritable;
};

int main()
{
    //Ustawiamy polski język dla konsoli, bo bazowo nie lubi polskich znaków
    setlocale(LC_CTYPE, "Polish");


    DigitalPicture obrazek;
    obrazek.SetAuthor("John Doe");
    obrazek.SetHeight(800);
    obrazek.SetWidth(600);
    obrazek.SetSize(500000);
    obrazek.SetReadable(true);
    obrazek.SetWritable(false);

    obrazek.Print();

    return 0;
}



