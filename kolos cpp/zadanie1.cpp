// zadanie 1 
// dziedzina wyrazenia:
// x-y^3/((x+1)^3-sqrt(y-3))
//


#include <iostream>
#include <math.h>
#include <cstdlib>


using namespace std;
double f(double x, double y)
{
    // x-y^3/((x+1)^3-sqrt(y-3))
    return (x-y*y*y)/((x-1)*(x-1)*(x-1)-sqrt(y-3));
}


int main()
{
    double m,n,o,p;
    cout<<"podaj zakres dla x: "<<endl;
    cin>> m;
    cin>>n;
    cout<<"podaj zakres dla y: "<<endl;
    cin>> o;
    cin>>p;
    
    for(int i=m;i<=n;i++)
    for(int j=o;j<=p;j++)
    {
    if((m>3) && (o!=((m+1)*(m+1)*(m+1)*(m+1)*(m+1)*(m+1)+3)))
    {
        double wynik=f(i,j);
        cout<< "wynik to :"<<wynik<<" dla x= "<<i<<" oraz y= "<<j<<endl;           
    }
    
    }
        
return 0;

}