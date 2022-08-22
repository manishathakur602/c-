#include<stdio.h>
int main()
{
	int var;
	int *ptr;
	int **p;
	var = 7000;
	 ptr = &var;

   p = &ptr;

   printf("Value of var = %d\n", var );
   printf("Value available at *ptr = %d\n", *ptr );
   printf("Value available at **pptr = %d\n", **p);

   return 0;
}

