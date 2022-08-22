#include <stdio.h>
int main()
{
    int i,j;
    i=1;
    printf("Multiplication table\n\n");
    printf("Here multiplication table\n\n");
 do
 {
    j=1;
 do
 {
    printf("%d\t",i*j);
    j++;
 }
 while(j<=15);
    printf("\n");
    i++;
    }
	while(i<=10);

    return 0;
    }

