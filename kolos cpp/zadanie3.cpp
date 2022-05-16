// macierze 
//zadanie 3
#include <iostream>
using namespace std;
int main()
{
int a,b,i,j;
cout<<"podaj wielkosc macierzy";
cin>>a;
cin>>b;
int MatrixA[a][b],MatrixB[a][b],MatrixI[a][b],wynik[a][b];

srand(time(NULL));

//funkcja wczytujaca  wartosci macierzy A

for (int i=0;i<a;i++)
    for(int j=0;j<b;j++)
        cin>>MatrixA[i][j];
//prezentacja wyniku
cout<<"macierzA: ";
for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
		cout<<MatrixA[i][j]<<" ";
    cout<<endl; //oddzielenie wierszy znakiem nowej linii
//macierz jednostkowa

for (i=0;i<a;i++)
    for(j=0;j<b;j++)
        MatrixI[i][i]=1;
        
cout<<endl;
//prezentacja wyniku
cout<<"macierz Jednostkowa: ";
for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
		cout<<MatrixI[i][j]<<" ";
    cout<<endl;
//teraz matrixB
cout<<"teraz Martix B- podaj elementy: ";
    for (int i=0;i<a;i++)
        for( int j=0;j<b;j++)
            cin>>MatrixB[i][j];
    cout<<endl;
//prezentacja wyniku
cout<<"macierz B: ";
for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
		cout<<MatrixB[i][j]<<" ";            
	cout<<endl;
//teraz obliczenia

    for (int i=0;i<a;i++)
        for( int j=0;j<b;j++)
            wynik[i][j]=(2*MatrixA[i][j])-MatrixB[i][j]+(3*MatrixI[i][j]);

//prezentacja wyniku
cout<<"wynik dzialania"<<endl;
for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
		cout<<wynik[i][j]<<" ";
	cout<<endl; //oddzielenie wierszy znakiem nowej linii

	
	return 0;
}