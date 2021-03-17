#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*int count(char* str, char carac)
{
    int i = 0;
    int cnt = 0;
    for( i = 0 ; i < strlen(str) ; i++)
    {
        if( str[i] == carac )
        {
            cnt++;
        }
    }
    return cnt;
}*/
int compter(char* str, char carac){
    int cnt = 0, i = 0;
    while( i < strlen(str) )
    {
        if( str[i] == carac)
        {
            cnt++;
        }
        i++;
    }
    return cnt;
}

