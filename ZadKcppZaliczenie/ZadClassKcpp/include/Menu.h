#ifndef Menu_H
#define Menu_H
#include "ZbiorMetod.h"

/*Klasa Menu ...*/
class Menu
{
public:
    Menu();
    ~Menu();
    void uruchom();
    void wybierzProgram(short wybor, ZbiorMetod &zbiorMetod);
private:
    bool run;
};
#endif