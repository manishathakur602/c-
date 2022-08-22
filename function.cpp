#include<stdio.h>
int max(int x, int y );
int main()
{
	int a=300;
	int b=200;
	int c;
	c = max(a, b);
 
   printf( "Max value is : %d\n", c);
   return 0;
}
int max(int x, int y) 
{
   int result;
 
    if(x>y)
      result = x;
    else
      result = y;
 
   return result; 
}
