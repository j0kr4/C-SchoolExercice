#include <stdlib.h>
#include <stdio.h>

int exercice3()
{
    int i,j,somme=0,tmp;
    scanf("%d",&i);
    scanf("%d",&j);
    
    if(j<i)
    {
        tmp=i;
        i=j;
        j=tmp;
    }

    while(i<=j)
    {
        somme = somme + i;
        i++;
    }
    return somme;
}

int main()
{
    printf("%d",exercice3());
    return 0;
}