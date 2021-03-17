#include<stdio.h>
int main()
{
	double var=3.14;
	double *point_var, *pointeur2;
	int var2=5, *pointeur3;
	point_var = &var;
	pointeur2=&point_var;
	pointeur3 = &var2+1;
	printf("%d %d\n",sizeof(double),sizeof(int));
	printf("%p %p %p\n",point_var, &var, pointeur2);
	printf("%p %p \n",&var2, pointeur3);
	return 0;
}