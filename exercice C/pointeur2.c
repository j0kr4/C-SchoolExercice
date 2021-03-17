#include <stdio.h>

/*int main()
{
    int tab[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int *p;
    p = tab;
    printf("%d\n", *(p+*(p+8)-tab[7]));
}
*/

/*int main()
{
    unsigned int entier = 134486;
    char *p;
    p = &entier;
    printf("Contenu de p =%c\n", *p);
    return 0;
}
*/

void init(int *t, int taille)
{
    for( *t=0; *t =! taille; *t++)
    *t = taille
}

int main()
{
    int tab[5];
    init(tab);
    printf("%d", tab);
}