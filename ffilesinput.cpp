#include <stdio.h>

main() 
{

   FILE *fp;
   char buff[255];

   fp = fopen("c:/Users/DELL/OneDrive/Documents/manisha.text","r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);

}
