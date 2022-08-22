#include<stdio.h>
int main()
{
	int a,b;
	for (a=3;a<100;a++)
	{
	for (b=3;b<=(a/b);b++)
		
	if(!(a%b)) 
	break; 
      if(b > (a/b)) 
	  printf("%d is prime\n", a);
   }
 
   return 0;
}
