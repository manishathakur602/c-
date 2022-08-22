#include<stdio.h>
double getAverage(int arr[], int size);

int main ()
 {
   int balance[9] = {1000, 2, 3, 17, 50,70,59,64,27};
   double avg;

   avg = getAverage( balance, 9 ) ;
  
   printf( "Average value is: %f ", avg );
    
    
   return 0;
}
double getAverage(int arr[], int size) 
{
   int i;
   double avg;
   double sum = 0;

   for (i = 0; i < size; ++i)
    {
      sum += arr[i];
   }
   avg = sum / size;

   return avg;
}
