#include "Menu.h"
#include "ZbiorMetod.h"
#include <iostream>
using namespace std;

Menu::Menu() { run = true; }
Menu::~Menu() {}

void Menu::uruchom() {
	short wybor;
	ZbiorMetod zbiorMetodObj;
	cout << "++++++++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "Witaj w aplikacji zaliczeniowej" << endl;
	cout << "Autor - �ukasz �uszczyk" << endl;
	while (run) {
		cout << "++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << "Dost�pne metody:" << endl;
		cout << "1) ZadCinCoutFile.cc " << endl;
		cout << "2) ZadSwitch.cc " << endl;
		cout << "3) ZadUnia.cc " << endl;
		cout << "4) LBitoweOperatoryLogiczneSingleVariable.cc " << endl;
		cout << "5) ZadParzysta.cc " << endl;
		cout << endl;
		cout << "6) Informacje o programach. " << endl;
		cout << "0) Wyj�cie. " << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << "Wprowad� liczb� z klawiatury: ";
		cin >> wybor;

		if (cin.fail()) { //Zabezpieczenie przed b��dnym inputem
			cin.clear();
			cin.ignore();
			cout << endl;
			cout << "B��dny znak" << endl;
			cout << endl;
			continue;
		}

		cout << endl;

		switch (wybor)
		{
		case 0: //Wyj�cie
			run = false;
			break;
		case 6: //Informacje
			cout << "Wybierz metod�: ";
			cin >> wybor;

			if (cin.fail()) { //Zabezpieczenie przed b��dnym inputem
				cin.clear();
				cin.ignore();
				cout << endl;
				cout << "B��dny znak" << endl;
				cout << endl;
				continue;
			}

			cout << endl;
			cout << "Metoda " << wybor << "." << endl;
			zbiorMetodObj.WyswietlOpisMetody(wybor);
			cout << endl;
			cout << "Kontynuowa�? (0 - wyj�cie): ";
			cin >> wybor;

			if (cin.fail()) { //Zabezpieczenie przed b��dnym inputem
				cin.clear();
				cin.ignore();
				cout << endl;
				cout << "B��dny znak" << endl;
				cout << endl;
				continue;
			}

			cout << endl;
			if (wybor == 0) {
				run = false;
			}
			break;
		default: // Wykonanie programu
			Menu::wybierzProgram(wybor, zbiorMetodObj);
			cout << endl;
			cout << "Kontynuowa�? (0 - wyj�cie): ";
			cin >> wybor;

			if (cin.fail()) { //Zabezpieczenie przed b��dnym inputem
				cin.clear();
				cin.ignore();
				cout << endl;
				cout << "B��dny znak" << endl;
				cout << endl;
				continue;
			}

			cout << endl;
			if (wybor == 0) {
				run = false;
			}
			break;
		}
	}
	cout << "Do zobaczenia!" << endl;
}

void Menu::wybierzProgram(short wybor, ZbiorMetod &zbiorMetod) {
	switch (wybor)
	{
	case 1:
		zbiorMetod.WywolajMetode(wybor);
		break;
	case 2:
		zbiorMetod.WywolajMetode(wybor);
		break;
	case 3:
		zbiorMetod.WywolajMetode(wybor);
		break;
	case 4:
		zbiorMetod.WywolajMetode(wybor);
		break;
	case 5:
		cout << "Dost�pne opcje::" << endl;
		cout << "1) Za pomoc� operatora przesuniecia" << endl;
		cout << "2) Za pomoc� modulo" << endl;
		cout << "3) Za pomoc� modulo z wykorzystaniem operatora warunkowego" << endl;
		cout << "Wprowad� liczb� z klawiatury: ";
		cin >> wybor;

		if (cin.fail()) { //Zabezpieczenie przed b��dnym inputem
			cin.clear();
			cin.ignore();
			cout << endl;
			cout << "B��dny znak" << endl;
			cout << endl;
			break;
		}

		cout << endl;
		zbiorMetod.WywolajMetode(5+wybor);
		break;
	default:
		cout << "--------------------------------------------" << endl;
		cout << "Wprowadzono b��dn� cyfr�. Spr�buj ponownie!" << endl;
		cout << "--------------------------------------------" << endl;
		break;
	}
}