#ifndef FUNKCJE_POMOCNICZE_H
#define FUNKCJE_POMOCNICZE_H

#include <iostream>
using namespace std;

/*Metoda2*/
int getWord(const string& word);
void switch_slowo(const string& word);

/*Metoda3*/
union UniaEuropejska
{
    int Panstwo1;
    float Panstwo2;
    double Panstwo3;
};

/*Metoda4*/
short konwersjaBuluNaShortInt(char* tablicaBulu);

/*Metoda5*/
void czyParzystaBin(int liczba);
void czyParzystaMod(int liczba);
void czyParzystaWarunkowy(int liczba);

#endif