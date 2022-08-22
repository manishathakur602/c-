#include<stdio.h>
void swap(int,int);
 int main()
{
	int a,b;
	a=10;
	b=30;
	printf("before swapping : %d %d\n",a);
	swap(a,b);
	printf("after swapping : %d %d\n",b);
}
void swap( int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp; 
	return ;
}
