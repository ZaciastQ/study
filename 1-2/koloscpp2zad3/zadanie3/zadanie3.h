

#include <iostream>
#include <string>

using namespace std;
class Telefon
{
public:
	string producent;
	string model;
	int waga;
	string wymiary;
	int czas_trzymania_baterii;
	Telefon(const string& pr = "brak", string mod = "brak", int w = 0, string wym = "brak", int bat = 0) {
		this->producent = pr;
		this->model = mod;
		this->waga = w;
		this->wymiary = wym;
		this->czas_trzymania_baterii = bat;

	}
	Telefon(string& pr, string mod, int w, string wym, int bat)
	{
		pr = producent;
		mod = model;
		w = waga;
		wym = wymiary;
		bat = czas_trzymania_baterii;
	}


	//metody
	void wczytaj()
	{
		cout << "podaj producenta ";
		cin  >> producent;
		cout << "podaj model";
		cin  >> model;
		cout << "podaj wage";
		cin >>waga;
		cout << "podaj wymiary";
		cin >> wymiary;
		cout << "podaj t trzymania baterii";
		cin >> czas_trzymania_baterii;
	}
private:
	void show()
	{
		cout << "Parametry Telefonu:" << endl;
		cout << "producent: " << producent << endl;
		cout << "model: " << model << endl;
		cout << "producent: " << waga << endl;
		cout << "producent: " << wymiary << endl;
		cout << "czas trzymania baterii" << czas_trzymania_baterii << endl;

	}
};
class Telefon_Dotykowy:public Telefon
{
public:
	string system_operacyjny;
	string typ_rysika;
	//domyslny
	Telefon_Dotykowy(const string & pr = "brak", string mod = "brak", int w = 0, string wym = "brak", int bat = 0, string sys="brak", string type="brak") {
	this->producent = pr;
	this->model = mod;
	this->waga = w;
	this->wymiary = wym;
	this->czas_trzymania_baterii = bat;
	this->system_operacyjny = sys;
	this->typ_rysika = type;
}
	//konstruktor
	Telefon_Dotykowy(string& pr, string mod, int w, string wym, int bat,string sys, string type)
	{
		sys = system_operacyjny;
		type = typ_rysika;
	}
	
	//metody
	void wczytaj()
	{
		cout << "podaj SO";
		cin >> system_operacyjny;
		cout << "podaj typ rysika";
		cin >> typ_rysika;
	}

	
};
