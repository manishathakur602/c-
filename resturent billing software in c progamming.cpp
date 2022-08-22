#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void generatebillheader(char name[50],char date[30])
{
	printf("\n\n");
	printf("\t ADV. resturent");
	printf("\n\t---------------");
	printf("\n date to : %s",date);
	printf("\n invoice to : %s",name);
	printf("\n");
	printf("---------------------\n");
	printf("items \t\t");
	printf("Qty \t\t");
	printf("total \t\t");
	printf("\n-----------------------");
	printf("\n\n");
}

void generatebillbody (char item[30],int qty,float price)
{
	printf("%s \t\t",item);
	printf("%d \t\t",qty);
	printf("% .2f \t\t",qty*price);
	printf("\n");	
}

struct items
{
char item[20];
float price;
int qty;	
};

struct orders
{
	char customer[50];
	char date[50];
	int numofitems;
	struct items itm[50];
};

void generatebillfooter (float total)
{
	printf("\n");
	float dis=0.1* total ;
	float nettotal=total-dis;
	float cgst=0.09*nettotal,generate,grandtotal=nettotal+2*cgst;
	printf("-----------------\n");
	printf("sub total\t\t\t% .2f",total);
	printf("\n discount @ 10% s\t\t\t%.2f","%",dis);
	printf("\n \t\t\t\t---------");
	printf("\nnet total\t\t\t%.2f",nettotal);
	printf("\ncgst @9%s\t\t\t%.2f","%",cgst);
	printf("\nsgst @9%s\t\t\t%.2f","%",cgst);
	printf("\n--------------------------------");
	printf("\ngrand total\t\t\t%.2f",grandtotal);
	printf("\n--------------------------------\n");	
}
int main()
{
	int opt,n;
	struct orders ord;
	
	printf("\t==========ADV.RESTAUANT===========");
	printf("\n\nplease select your prefered operation");
	printf("\n\n1.generate invoice");
	printf("\n2.show all invoices");
	printf("\n3.search invoices");
	printf("\n4.exit");
	
	printf("\n\nplease select your prefered operation");
	scanf("%d",&opt);
	fgetc(stdin);
	switch(opt)
    {
	    case1:
    	printf("\nplease enter the name of the customer:\t");
	    fgets(ord.customer,50,stdin);
	    ord.customer[strlen(ord.customer)-1]=0;
	    strcpy(ord.date,__DATE__);
	    printf("\nplease enter the number of items:\t");
	    scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
	fgetc(stdin);
	printf("\n\n");
	printf("please enter the item %d:\t",i+1);
	fgets(ord.itm[i].item,20,stdin);
	ord.itm[i].item[strlen(ord.itm[i].item)-1]=0;
	printf("\nplease enter the quantity:\t");
	scanf("%d",&ord.itm[i].qty);
	printf("\nplease enter the unit price:\t");
	scanf("%f",&ord.itm[i].price);
	}
		
}
	
	printf("\n\n");
	return 0;
}
	

