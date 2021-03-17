#include <stdio.h>
#include <stdlib.h>

int exercice1()
{
    int somme = 0, i;
    for(i=1; i<=100;i++)
{
    somme = somme + i;
}
return somme;
}

int main()
{
    printf("%d",exercice1());
    return 0;
}

