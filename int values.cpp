#include<stdio.h>
int main()
{
	float a=19,b=23,x;

	x=(a&&b);
	printf("(a&&b) is %d,\n",x);
	
	x=(a||b);
	printf("(a||b) is %d,\n",x);
	
	x=(!a,b);
	printf("(!a,b)is %d,\n",x);
	
	x=(a<=b);
	printf("(a<=b)is %d,\n",x);
	
	x=(a>=b);
	printf("(a>=b)is %d,\n",x);
	
	x=(a<b);
	printf("(a<b)is %d,\n",x);

	
	
	return 0;
}
