#include<stdio.h>
int main()
{
	char grade ='A';
	
	switch(grade)
	{
		case 'A':
			printf("excellent\n");
			break;
		case 'B':
			printf("very good\n");
			break;
		case 'C':
			printf("good\n");
			break;
		case 'D':
			printf("average\n");
			break;
		case 'E':
			printf("poor\n");
			break;
		default:
			printf("invalid grade\n");
		 }
		printf("your garde is %c \n",grade);
		return 0;
	}
	
	
	
