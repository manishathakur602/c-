#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a\n");
	scanf("%d",&a);
	
	if (a>0)
	printf("a is positive value\n");
	else if(a<0)
	printf("a negative value\n");
	else
	printf("a is not equal to 0\n");
	return 0;
}
