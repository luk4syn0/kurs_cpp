#ifndef ZBIOR_METOD_H
#define ZBIOR_METOD_H

/*Klasa ZbiorMetod ...*/
class ZbiorMetod
{
public:
    ZbiorMetod();
    ~ZbiorMetod();
    void WywolajMetode(int numerMetody);
    void WyswietlOpisMetody(int numerMetody);

private:
    void Metoda1();
    void Metoda2();
    void Metoda3();
    void Metoda4();
    void Metoda5(short sposob);
};


#endif 