#include<stdio.h>
int main()
{
	int n[20];
	int i;
	for ( i = 0; i < 10; i++ )
   {
    n[ i ] = i + 100;  
    printf("Element[%d] = %d\n",i,n[i] );
}
}
