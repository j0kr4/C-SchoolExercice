#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int tab [] = {12, 15, 13, 10, 8, 9, 13, 14};
    int max, i;
        max = tab[0];

    for (i=0; i<8; i++){
         if ( max < (tab[i+1]))
         {
               max = (tab[i+1]);
         }
    }
    printf("le maximum est : %d\n", max);
    return max;
}
