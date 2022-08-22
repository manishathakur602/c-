#include<stdio.h>
int main()
{
	int a=2;
    int b=0;
	do
	{
	printf("%d * %d = %d \n", a, b, a*b);
	b++;
	}
	while(b<11);
	return 0;
}
