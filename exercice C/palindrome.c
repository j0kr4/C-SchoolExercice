#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Palindrome(char* mot)
{
    int i = 0, length = 0;
    length = strlen(mot);
    for ( i = 0 ; i < length/2 ; i++ )
    {
        if (mot[i] != mot[length-1-i])
        return 0;
    }
    return 1;
}

int main(void)
{
    char chaine[64];
    printf("entrez une chaine\n");
    scanf("%[^\n]s", chaine);
    if (Palindrome(chaine))
    {
        printf("%s est un palindrome\n", chaine);
    }
    else
    {
        printf("%s n_est pas un palindrome\n", chaine);
    }
    return 0;
} 