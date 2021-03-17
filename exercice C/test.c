#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char bidule[15] = {'\0'};
    /*gets(bidule);*/
    scanf("%[^\n]s",bidule);
    printf("%s", bidule);
}