#include <stdio.h>
#include <stdlib.h>

void Even_number(int N)
{
   int  even , odd;
   even = 0;
   odd = 0;

   printf("enter number : ");
   scanf("%d", &N);

   if ( N % 2 == 0 )
   {
        printf("even number");
   }
   else 
   printf("odd number ");
}

int main()
{
    int N;
    
    Even_number(int N);
    return 0;

}
