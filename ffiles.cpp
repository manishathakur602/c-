#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("C:/Users/DELL/OneDrive/Documents/manisha.text","r");
	fprintf(fp,"this is texting for f print\n");
	fputs("this is texting for fputs\n",fp);
	fclose(fp);
}
