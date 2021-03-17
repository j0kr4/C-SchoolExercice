/* Ecrire une fonction permettant d'inverser une chaîne de caractères. La fonction retournera la chaîne inversée. */

#include <stdio.h>
#include <string.h>

char* reverse (char* chaine)
{
    int i = 0, length = 0;
    char lettre;
    length = strlen(chaine);
    for( i = 0; i < strlen(chaine)/2; i++)
    {
        lettre = chaine[i];
        chaine[i] = chaine[length-i-1];
        chaine[length-i-1] = lettre;
    }
    return chaine;
}


int main()
{
    char c[64] ="";
    printf("entrez un mot: \n");
    scanf("%[^\n]s", c);
    printf("%s\n", reverse(c));
}