
#include <iostream> 
//zadanie 2 ale sprawdza rzeczywista/calkowita
using namespace std;
int main(void)
{
float x;
cin>>x;
 
 if(x-int(x) == 0) cout<<"Calkowita"<<endl;
 else cout<<"Z przecinkiem"<<endl;
 return 0;
}