#include <stdio.h>
int main()
{
   int a, i;
   
    printf("Enter a Number ");
    scanf("%d",&a);
    i=1;
    while(i<=10)
	{        
        printf("%d * %d = %d \n", a, i, a*i);
        ++i;
    }
       return 0;
    
} 

