//area of  a square


#include <stdio.h>
#include <stdlib.h>

 void Area_square(int C)
    {
        float A = 0;
        

        A = C * C;
        
        printf("the area square is : %.1f ", A);
    }
    
    int main()
{
   int Area, C;
   
   printf("enter the squre value: ");
   scanf("%d", &C );

    Area_square(C);

   

   
}s