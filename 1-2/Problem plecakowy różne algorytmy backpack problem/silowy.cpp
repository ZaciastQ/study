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

    plecak = 5000;
    string nazwa[3];

    nazwa[0] = "cola";
    nazwa[1] = "sok";
    nazwa[2] = "mineralna";
    int wielkosc[3];

    wielkosc[0] = 4;
    wielkosc[1] = 3;
    wielkosc[2] = 1;
    double cena[3];

    cena[0] = 16;
    cena[1] = 14;
    cena[2] = 1;
    int wziac[3];
    int i, j, k;
    double max;

    max = 0;
   start=clock();
    for (i = 0; i <= (double) plecak / wielkosc[0]; i++)
    {
        for (j = 0; j <= (double) plecak / wielkosc[1]; j++)
        {
            for (k = 0; k <= (double) plecak / wielkosc[2]; k++)
            {
                if (i * wielkosc[0] + j * wielkosc[1] + k * wielkosc[2] <= plecak)
                {
                    if (i * cena[0] + j * cena[1] + k * cena[2] > max)
                    {
                        max = i * cena[0] + j * cena[1] + k * cena[2];
                        wziac[0] = i;
                        wziac[1] = j;
                        wziac[2] = k;
                    }
                }
            }
        }
    }
    stop=clock();
    czas = (double) (stop-start)/ CLOCKS_PER_SEC ;
    cout<< "SILOWY";
    cout<<endl<<"czas programu : " << czas << " s"<<endl;
    cout<<"cena za wszystko: "<< max << "zl\n" ;
    cout << "ilosc coli " << wziac[0] << "\n";
    cout << "ilosc sokow " << wziac[1] << "\n" ;
    cout << "ilosc wod mineralnych " << wziac[2] << "\n" ;

    return 0;
}
