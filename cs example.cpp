#include<stdio.h>
int main()
{
	int a=100;
	do
	{
		if( a == 120) 
		{ 
        	a = a + 1;
        	continue;
    		}
		
      	printf("value of a: %d\n", a);
      	a++;
   
   } 
   while( a < 140);
 
   return 0;
}
	
