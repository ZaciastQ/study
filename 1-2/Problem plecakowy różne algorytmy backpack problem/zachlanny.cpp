#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <time.h>
#include <windows.h>

using namespace std;
clock_t start,stop;
double czas;


int main()
{
    int plecak;

    plecak = 14;
    string nazwa[3];

    nazwa[0] = "sok";
    nazwa[1] = "cola";
    nazwa[2] = "woda";
    int wielkosc[3];

    wielkosc[0] = 3;
    wielkosc[1] = 4;
    wielkosc[2] = 1;
    double cena[3];

    cena[0] = 14;
    cena[1] = 16;
    cena[2] = 1;
    int wziac[3];
    int i;
start=clock();
    i = 0;
    while (plecak > 0 && i < 3)
    {
        wziac[i] = (int) ((double) plecak / wielkosc[i]);
        plecak = plecak - wziac[i] * wielkosc[i];
        i = i + 1;
    }
stop=clock();
czas=(double)(stop-start)/CLOCKS_PER_SEC;
cout<<"ZACHLANNY";
    cout<<endl<<"czas programu : " << czas << " s"<<endl;
    cout<<"cena za wszystko: "<< cena[0]*wziac[0]+cena[1]*wziac[1]+cena[2]*wziac[2] << "zl\n" ;
    cout << "ilosc coli " << wziac[1] << "\n";
    cout << "ilosc sokow " << wziac[0] << "\n" ;
    cout << "ilosc wod mineralnych " << wziac[2] << "\n" ;
    return 0;
}

