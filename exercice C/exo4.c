#include <stdlib.h>
#include <stdio.h>

void exercice4()
{
    int n=1;
    int t=0;
    int c=1;

    while(n<=20)
      {
         while(t<3)
            {
         printf("%d ",c);
            c=c+1;
            n=n+1;
            t=t+1;
        }
        t=0;
        printf("\n");
    }
}

int main()
{
    exercice4();
}