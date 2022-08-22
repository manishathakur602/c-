#include<stdio.h>
int main()
{
	int a=10;
	int b=4;
	int c;
	
	c=a|b;
	printf(" values of c is%d\n",c);
	
	c=a^b;
	printf("values of c is %d\n",c);
	
	c=~a;
	printf("values of c is %d\n",c);
	
	c=a<<1;
	printf("values of c is %d\n",c);
	
	c=a>>1;
	printf("values of c is %d\n",c);
	
	c=a&b;
	printf("values of c is %d\n",c);
	
	return 0;

}
