#include<stdio.h>
int main()
{
	int x=40;
	int *p;
	p=&x;
	printf("value of x is : %x\n",&x);
	printf("value of p is : %p\n",&p);
	printf("value of p is : %d\n",*p);
	return 0;
}
