#include<stdio.h>
int main()
{
	int j;
	for(j=0;j<15;j++)
	{
	if(j==5)
	{
		continue;
	}
	printf("%d\n",j);
    }
	return 0;
}
