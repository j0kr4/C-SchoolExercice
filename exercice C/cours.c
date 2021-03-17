#include <stdlib.h>
#include <stdio.h>

int CalculAge(int annee);

int main()
{
    int an, age;
printf("entrez votre année de naissance :");
scanf("%d", &an);
age = CalculAge(an);
printf("Vous avez %d ans", age);
return 0;
}

int CalculAge(int annee)
{
    return 2018-annee;
}



