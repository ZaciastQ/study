#include <iostream>
#include <string>
#include "zadanie2.h"


int main()
{
	using namespace std;
	//wywolanie obiektow
	Eskulap eskulap("Eskulap", "czesio", 1);
	Panda panda("Panda", "Po", 2, 700);
	Papuga papuga("papuga", "Repeater", 30, 150);

	//show
	cout << "eskulap:" << endl;
	cout <<"gatunek " << eskulap.gatunek << endl;
	cout <<"imie " << eskulap.imie << endl;
	cout <<" dlugosc w m: " << eskulap.dlugosc << endl;
	cout << endl;
	cout << "panda:" << endl;
	cout << "gatunek " << panda.gatunek << endl;
	cout << "imie " << panda.imie << endl;
	cout <<"wysokosc " << panda.wysokosc << endl;
	cout <<"waga" << panda.waga << endl;
	cout << endl;
	cout << "papuga:" << endl;
	cout << "gatunek " << papuga.gatunek << endl;
	cout << "imie " << papuga.imie << endl;
	cout <<"dlugosc w cm: " << papuga.dlugosc << endl;
	cout <<"rozpietosc skrzydel w cm:" << papuga.rozpietosc_skrzydel << endl;



	







	return EXIT_SUCCESS;
}