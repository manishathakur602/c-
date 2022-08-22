#include<stdio.h>
int main()
{
	int a[5][8]={ {0,0},{2,6},{4,7},{6,8},{9,6}};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<8;j++)
		{
	
		printf("a[%d][%d]=%d\n",i,j,a[i][j]);
	}
}
return 0;
}
