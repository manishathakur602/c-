#include<stdio.h>

int a(int i)
{
	if(i==0)
	{
		return 0;
	}
	if(i==1)
	{
	return 1;
}
 return a(i-1) + a(i-2);
}
int  main() {

   int i;
	
   for (i = 0; i < 10; i++) 
   {
    printf("%d\t\n", a(i));
   }
	
   return 0;
}

