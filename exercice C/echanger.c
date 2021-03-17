#include <stdio.h>

void echanger(int* a, int* b)
{
    int* c;
    c = *a;
    *a = *b;
    *b = c;
}



int main()
{
    int x = 10, y = 5;
    printf("%d %d\n",x ,y);
    echanger(&x, &y);
    printf("%d %d\n",x ,y);
}
