#include <stdio.h>
int main ()
{
  int a = 20, b = 4, choice;
  printf ("1. addition ");
  printf ("2. subtraction ");
  printf ("3. multiplication ");
  printf ("4. division ");
  printf ("5. modulus ");
  
  printf ("enter your choice = ");
  scanf ("%d" , &choice);
  
  switch (choice)
  {
  case 1:
  printf ("addition = %d", a+b);
  break;
  
  case 2:
  printf ("subtraction = %d", a-b);
  break;
  
  case 3:
  printf ("multiplication = %d", a*b);
  break;
  
  case 4:
  printf ("division = %d", a/b);
  break;
  
  case 5:
  printf ("modulus = %d", a%b);
  break;
  
  default:
  printf ("invalid choice");
  break;
  
  }
  return 0;
}
