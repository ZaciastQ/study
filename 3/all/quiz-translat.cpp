

//Do dokończenia (wkleiłem inne pytania zle  liczy poprawne)
//Tomasz Bar***ek//
//Quiz na listach i pętlach for



#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	string pytania[10] = {
	"Najdłuższa rzeka na świecie?",
	"Do jakiego Państwa przynależy Burger King?",
	"Jak nazywa się rodzaj złącza odpowiadającego za przesył danych skrętką (szeroko-pasmowe)",
	"Pierwsza osoba która sporządziła jakąkolwiek mapę",
	"Kto pierwszy postawił stope na satelicie naturalnej Ziemii?",
	"Jak nazywa sie parlament-władza w Chinach",
	"WIE BITTE - co to znaczy po niemiecku?",
	"Stolica Ameryki to?",
	"Skąd pochodzi Elon Musk?",
	"całka z x po dx?"
						};
	string options[10][4] = {
	{"Eufrat","Amazonka","Mali","Nil"},
	{"America","Anglia","Turcja","Żadne z nich"},
	{"MI6","CIA","8P8C","RJ11"},
	{"Heraclitus","Pitagoras","Anaximander","Tales"},
	{"LMP Edgar","CMP Stuart","Neil Armstrong","Nikt z nich"},
	{"Zgromadzenie Narodowe ","Kongres","Fedralny parliament","None"},
	{"CO ?","Przepraszam","Co prosze?","Jak jest?"},
	{"Washington","Alaska","Hawaii","California"},
	{"Pretoria","Israel","Jordan","Egypt"},
	{"xdx","x do kwadratu podzielone przez 2","1","0"},
					    };
	string Poprawne[10] = {
		"Chile","America","CIA","Anaximander",
		"Neil Armstrong","National people’s Congress","Africa",
		"Washington DC","Jordan","Pacific Ocean"
								};
	int opcjeUzytkownika[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQues = 10;	
	int op;

	//---- +++Quiz+++ ----
	for( int i=0; i<totalQues; i++ ){
		cout<<"Pytanie nr # "<<(i+1)<<endl;
		cout<< pytania[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl<<endl;
		
		cout<<"Wybierz 1-4 lub kliknij 0 aby wyjść ";
		cin >> opcjeUzytkownika[i];
		cout<<endl<<"-----------------------------"<<endl<<endl;
	}
	
	//----- Poprawne print -----
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"==== Poprawne odpowiedzi==== "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	for( int i=0; i<totalQues; i++ ){
		cout<<"Pytanie # "<<(i+1)<<endl;
		cout<< pytania[i]<<endl;
		cout<< "1."<<options[i][0]<<endl;
		cout<< "2."<<options[i][1]<<endl;
		cout<< "3."<<options[i][2]<<endl;
		cout<< "4."<<options[i][3]<<endl;
		
		if( opcjeUzytkownika[i] == 0 ){
			cout<< "Pominąłeś to pytanie"<<endl;		
		}else{
			cout<< "Wybrałes : "<<options[i][opcjeUzytkownika[i]-1]<<endl;		
		}
		cout<< "Poprawna opcja : "<<Poprawne[i]<<endl<<endl;

		cout<<"Press any key to continue..."<<endl;
		getch();
		cout<<endl<<"------------------"<<endl;
	}
	
	// Printing Res
	cout<<endl<<endl;
	cout<<"======= ======= ======= ======= "<<endl;
	cout<<"=======      Wynik     ======= "<<endl;
	cout<<"======= ======= ======= ======= "<<endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;
	for( int i=0; i<totalQues; i++ ){
		if( opcjeUzytkownika[i] != 0 ){
			if( Poprawne[i] == options[i][opcjeUzytkownika[i]-1] ){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout<< "Total: "<< totalQues <<endl;	
	cout<< "Poprawne : "<< correct <<endl;
	cout<< "Niepoprawne : "<< incorrect <<endl;
	cout<< "Pominiete : "<< skipped <<endl;
	
	getch();
	return 0;
}