#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int taille(char* chaine)
{
    int i = 0;
    while( chaine[i] != '\0')
    i++;
    return i;
}*/

int taille(char* chaine)
{
    int i = 0;
    for( i = 0 ; chaine[i] != '\0' ; i++)
    {}
    return i;
}

int main()
{
    char ch[]="Hitema";
    /*char test0 = '1';
    printf("lol %c\n", test0);*/
    printf("%d\n", taille(ch));
    printf("%s\n", ch);
    return 0;
}