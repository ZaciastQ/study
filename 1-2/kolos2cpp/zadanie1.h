#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
class Uczen
{
private:
	string imie;
	string nazwisko;
	int pesel;

public:
	void podaj_imie()
	{

			cout << "podaj imie ucznia :" << endl;
			cin >> imie;
	}
	void podaj_nazwisko()
	{

		cout << "podaj nazwisko ucznia :" << endl;
		cin >> nazwisko;
	}
	void podaj_pesel()
	{

		cout << "podaj pesel ucznia :" << endl;
		cin >> pesel;
	}

	
};
class Uczen_nazwa_szkoly :public Uczen 
{private:
	string nazwa_szkoly;
public:
	void podaj_szkole()
	{

		cout << "podaj szkole ucznia :" << endl;
		cin >> nazwa_szkoly;
	}

};
class Uczen_nazwa_klasy :public Uczen_nazwa_szkoly
{
private:
	int klasa;
public:

	void podaj_klase()
	{

		cout << "podaj klase ucznia :" << endl;
		cin >> klasa;
	}

};