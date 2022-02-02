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

double dziel(int w, int wielkosc[], double cena[], int c[])
{
    double maxi;

    maxi = 0;
    int i, j;

    if (w == 0)
    {
        for (i = 0; i <= 2; i++)
        {
            c[i] = 0;
        }
    }
    else
    {
        int ct[3];
        double temp;

        for (j = 0; j <= 2; j++)
        {
            if (w - wielkosc[j] >= 0)
            {
                temp = dziel(w - wielkosc[j], wielkosc, cena, ct) + cena[j];
                if (maxi < temp)
                {
                    maxi = temp;
                    for (i = 0; i <= 2; i++)
                    {
                        c[i] = ct[i];
                    }
                    c[j] = c[j] + 1;
                }
            }
        }
    }

    return maxi;
}

int main()
{
    int plecak;

    plecak = 35;
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
    double maxi;

    maxi = 0;
    start=clock();
    dziel(35, wielkosc, cena, wziac);
    stop=clock();
    czas=(double) (stop-start)/CLOCKS_PER_SEC;
    cout<<"DZIEL I ZWYCIEZAJ";
    cout<<endl<<"czas programu : " << czas << " s"<<endl;
    cout<<"cena za wszystko: "<< cena[0]*wziac[0]+cena[1]*wziac[1]+cena[2]*wziac[2] << "zl\n" ;
    cout << "ilosc coli " << wziac[0] << "\n";
    cout << "ilosc sokow " << wziac[1] << "\n" ;
    cout << "ilosc wod mineralnych " << wziac[2] << "\n" ;
    return 0;
}



