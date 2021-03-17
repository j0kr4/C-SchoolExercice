#include <stdio.h>
#include <stdlib.h>

int exercice2()
{
    int somme = 0, i;
    for(i=1; i<=100;i++)
{
    if(i%2==0)
    {
        somme = somme + i;
    }
}
return somme;
}

int main()
{
    printf("%d",exercice2());
    return 0;
}