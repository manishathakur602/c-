#include<stdio.h>
#include<string.h>

struct books
{
	char tittle[50];
	char author[50];
	char subject[100];
	int book_id;
	
};
 int main()
 {

 
  struct books book1;
 struct books book2;
 
   strcpy( book1.tittle, "C Programming");
   strcpy( book1.author, "manisha thakur"); 
   strcpy( book1.subject, "C Programming Tutorial");
   book1.book_id = 6495407;
 
   strcpy( book2.tittle, "Telecom Billing");
   strcpy( book2.author, "manisha thakur");
   strcpy( book2.subject, "Telecom Billing Tutorial");
   book2.book_id = 6495700;

   printf( "book 1 title : %s\n", book1.tittle);
   printf( "book 1 author : %s\n", book1.author);
   printf( "book 1 subject : %s\n", book1.subject);
   printf( "book 1 book_id : %d\n", book1.book_id);
   
   printf( "Book 2 title : %s\n", book2.tittle);
   printf( "Book 2 author : %s\n", book2.author);
   printf( "Book 2 subject : %s\n", book2.subject);
   printf( "Book 2 book_id : %d\n", book2.book_id);

   return 0;
}


