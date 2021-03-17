#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int tab[] = {7, 8, 12, 3, 44};
    int tab1[] = {10, 12, 33};
    int i, cpt = 0;
    if ( (sizeof(tab) / sizeof(int)) == (sizeof(tab1) / sizeof(int)) )
    {
        for (i = 0; i < sizeof(tab)/sizeof(int); i++)
        {
            if (tab[i] != tab1[i])
            {
                cpt++;
            }
        }
        if (cpt == 0)
        {
            printf("Indentiques \n");
        }
        else
        {
            printf("Non indentiques \n");
        }
    }
    else
    {
        printf("Non indentiques \n");
    }
}