#include <stdio.h>
#include <stdlib.h>

void vymena(int a, int b);
void pVymena(int *a, int *b);
void operacie(int a, int b, int *mojSucet, int *mojSucin, int *mojRozdiel);
int main()
{
    /*int pocet;
    pocet = 10;
    printf("%d ", pocet);
    int *pPocet=&pocet;     //v 1 kroku
    int *pPocet2;
    pPocet2=&pocet;         //v 2 krokoch
    *pPocet=15;             //* ukladáme hodnotu do smerníka
    printf("%d ", pocet);
    *pPocet2=20;
    printf("%d ", pocet);

    int x=10;
    int y=20;
    vymena(x,y);
    pVymena(&x,&y);     //neposielam ich hodnoty, ale adresy, preto používame &
    int sucet;
    int sucin;
    int rozdiel;
    operacie(x,y,&sucet, &sucin, &rozdiel);*/
    //(void *)malloc(size_t mnozstvoPamate);
    int *pHromada;
    if ((pHromada=(int *)malloc(sizeof(int)))==NULL)
    {
        puts( "Nepodarilo sa alokovat pamat");
        return 1;
    }

    free(pHromada);
    pHromada=NULL;      //nakonci zadefinujeme konštantu na 0
    return 0;
}

void operacie(int a, int b, int *mojSucet, int *mojSucin, int *mojRozdiel)
{
    *mojSucet = a + b;
    *mojSucin = a * b;
    *mojRozdiel = a - b;
}
void vymena(int a, int b) //preberá len kópie premenných neuloží sa v main
{
    int temp=a;
    a=b;
    b=temp;
}

void pVymena(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

