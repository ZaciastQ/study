#include <iostream>
#include <string>

using namespace std;
class Zoo
{
public:
	string gatunek;
	string imie;
};
class Eskulap:public Zoo
{
public:
	int dlugosc;

	Eskulap(const string gat, const string name, int dl)
	{
		gatunek = gat;
		imie = name;
		dlugosc = dl;
	}
};
class Panda :public Zoo
{
public:
	int wysokosc, waga;
	Panda(const string gat, const string name, int wys, int w)
	{

		gatunek = gat;
		imie = name;
		wysokosc=wys;
		waga = w;
	}
};

class Papuga :public Zoo
{
public:
	int dlugosc, rozpietosc_skrzydel;
	Papuga(const string gat, const string name, int dl, int rs)
	{

		gatunek = gat;
		imie = name;
		dlugosc = dl;
		rozpietosc_skrzydel = rs;
	}
};
