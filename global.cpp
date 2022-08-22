# include<stdio.h>
extern int a=6,b=9;
extern int c;
int main()
{
	int c=a+b;
	printf("values of c: %d\n",c);
	return 0;
}

