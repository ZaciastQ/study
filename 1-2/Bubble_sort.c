#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>



//not works yet

int main()
{

    int ile,i=1,j;
    int tab[i];
    printf("podaj ile liczb do posortowania\n");
    scanf("%d",&ile);

    srand(time(NULL));

    for(i=0; i<ile; i++)
    {
        tab[i]=rand()%10000+1;

    }
    printf("przed posortowaniem\n");
    for(i=0; i<ile; i++)
    {
        printf("%d",tab[i]);

    }


    for(i=1; i<ile; i++)
    {
        for(j=ile-1; j>=1; j--)
        {
            if(tab[j]>tab[j-1])
            {
                int bufor;
                bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }

    printf("po posortowaniu\n");
    for(i=0; i<ile; i++)
    {
        printf("%d",tab[i]);

    }
    return 0;
}


