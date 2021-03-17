#include <stdlib.h>
#include <stdio.h>

int main()
{

    char *p = malloc( 7  * sizeof(char));

    if( p!= NULL)
    {
	    *p = 'H';
        *(p+1)= 'I';
        *(p+2) = 'T';
        *(p+3) = 'E';
        *(p+4) = 'M';
        *(p+5) = 'A';
        *(p+6) = '\0';
        printf("%s\n", p);
	    free(p);
    }
    else
    {
	    printf("Mémoire insuffisante");
    }
}