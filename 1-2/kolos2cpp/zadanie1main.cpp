#include <iostream>
#include "zadanie1.h"
#include <cstdlib>
#include <windows.h>
#include <string>
using namespace std;
int main()
{

	cout << "WITAJ W SZKOLE" << endl;
	Uczen_nazwa_klasy uczen1;
	uczen1.podaj_imie();
	uczen1.podaj_nazwisko();
	uczen1.podaj_pesel();
	uczen1.podaj_szkole();
	uczen1.podaj_klase();

	system("Pause");
	return EXIT_SUCCESS;
}