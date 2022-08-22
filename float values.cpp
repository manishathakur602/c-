#include<stdio.h>
int main()
{
	float a=12.09,b=23.00,x;
	
    x=(a&&b);
	printf("(a&&b) is %f,\n",x);
	
	x=(a||b);
	printf("(a||b) is %f,\n",x);
	
	x=(!a,b);
	printf("(!a,b)is %f,\n",x);
	
	x=(a<b);
	printf("(a<b) is %f,\n",x);
	
	x=(a>b);
	printf("(a>b) is %f,\n",x);
	
	x=(a<=b);
	printf("(a<=b) is %f,\n",x);

	x=(a>=b);
	printf("(a>=b) is %f,\n",x);
	
	return 0;
}
