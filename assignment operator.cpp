#include <stdio.h>
int main()
{
	int a=10;
	int b=20;
	a+=b;
	printf("values of a:%d\n",a);
	
	a-=b;
	printf("values of a:%d\n",a);
	
	a*=b;
	printf("values of a:%d\n",a);
	
	a/=b;
	printf("values of a:%d\n",a);
	
	a%=b;
	printf("values of a:%d\n",a);
	
	a<<=2;
	printf("values of a:%d\n",a);
	
	a>>=2;
	printf("values of a:%d\n",a);
	
	a&=b;
	printf("values of a:%d\n",a);
	
	return 0;
}
