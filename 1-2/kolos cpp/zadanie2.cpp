#include <iostream>
using namespace std;
int main( void )
{

    char z,k;
    cout<<"program sprawdzajacy czy podany znak to liczba litera czy znak specjalny"<<endl;
    cout<<"podaj znak z klawiatury";
    cin>> z;
    if( ((z >= 'a') && (z<='z')) || ((z>='A') && (z<='Z')))
    {
        k=1;
    }
    else if ( (z>='0') && (z<='9') )
    {
        k=2;
    }
    else
    {
        k=3;
    }
    switch(k)
    {
        case 1: 
        cout<<"podany znak to litera";
        break;
        case 2:
        cout<<"podany znak to cyfra";
        break;
        case 3:
        cout<< "podany znak to znak specjalny ";
        break;
    }

   return 0;
}