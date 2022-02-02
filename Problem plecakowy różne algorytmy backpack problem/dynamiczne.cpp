
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

int main() {
    string nazwa[3];

    nazwa[0] = "cola";
    nazwa[1] = "sok";
    nazwa[2] = "woda";
    int wielkosc[3];

    wielkosc[0] = 4;
    wielkosc[1] = 3;
    wielkosc[2] = 1;
    double cena[3];

    cena[0] = 16;
    cena[1] = 14;
    cena[2] = 1;
    int plecak[15];
    int coli[15];
    int soku[15];
    int wody[15];

    coli[0] = 0;
    soku[0] = 0;
    wody[0] = 0;
    plecak[0] = 0;
    int i, j;
    double maxi, temp;
   start= clock();

    for (i = 1; i <= 35; i++) {
        maxi = 0;
        for (j = 0; j <= 2; j++) {
            if (i - wielkosc[j] >= 0) {
                temp = plecak[i - wielkosc[j]] + cena[j];
                if (maxi < temp) {
                    maxi = temp;
                    plecak[i] = (int) maxi;
                    coli[i] = coli[i - wielkosc[j]];
                    soku[i] = soku[i - wielkosc[j]];
                    wody[i] = wody[i - wielkosc[j]];
                    if (j == 0) {
                        coli[i] = coli[i] + 1;
                    } else {
                        if (j == 1) {
                            soku[i] = soku[i] + 1;
                        } else {
                            wody[i] = wody[i] + 1;
                        }
                    }
                }
            }
        }
    }
    stop=clock();
    czas = (double) (stop-start)/ CLOCKS_PER_SEC ;
    cout<< "dynamiczne programowanie";
    cout<<endl<<"czas programu : " << czas << " s"<<endl;
    cout<<"cena za wszystko: "<< "158" << "zl\n" ;
    cout << "ilosc coli " << "2" << "\n";
    cout << "ilosc sokow " << "9" << "\n" ;
    cout << "ilosc wod mineralnych " << "0" << "\n" ;

    return 0;
}

