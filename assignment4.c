#include <stdio.h>
//runtime initialization
int main ()
{
  int A[3][3], B[3][3], Sum[3][3];
  int i,j;
  
  printf ("enter first matrix elements: \n");
  for (i=0; i<3; i++)
  {
    for (j=0; j< 3; j++)
    {
      scanf("%d"  , &A[i][j]);
    }
  }
  
  printf ("enter second matrix elements: \n");
  for (i=0; i<3; i++)
  {
    for (j=0; j< 3; j++)
    {
      scanf ("%d"  , &B[i][j]);
    }
    
  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
      Sum[i][j] = A[i][j] + B[i][j];
      }
    }
  }
  
  printf ("Additon of two matrices is: \n");
  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
      printf ("%d" , Sum[i][j]);
    }
  }      
   return 0;
  }
  
 
