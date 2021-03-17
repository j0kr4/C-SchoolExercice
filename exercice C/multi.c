#include <stdio.h>
#include <stdlib.h>

void afficher(int* tab, int size)
{
    int i = 0;
    for(i=0; i<size ; i++)
    {
        printf("%d\n", tab[i]);
    }
}

void multiplier(int* tab, int size, int a)
{
    int i = 0;
    for(i = 0; i < size ; i++)
    {
        tab[i] = tab[i] * a;
    }
}

int main (void)
{
    int a;
    int tableau[]={1,2,3,4,5};
    int taille = sizeof(tableau)/sizeof(int);
    printf("entrez le multiplicateur: ");
    scanf("%d", &a);
    multiplier(tableau, taille, a);
    afficher(tableau, taille);
}