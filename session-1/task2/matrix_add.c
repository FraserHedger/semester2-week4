
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
    float a[4][4];
    float b[4][4];
    float c[4][4];
    for (int i = 0; i<4; i++)
    {
      for(int t = 0; t<4; t++)
      {
         c[i][t] = a[i][t] + b[i][t];
         printf("Row %d, Collumn %d = %f, ", i, t, c[i][t]);

      }
      
    }
    
    /*
    Intialise the matrix a and b entries to 1. 
    Write code to compute the sum.
    Store your answer in matrix c
    Print your final answer
    */
   
    return 0;
 }
