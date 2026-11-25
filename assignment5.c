#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[100], str2[100];
  int choice, result;
  
  printf ("enter first string: ");
  scanf("%s", str1);
  
  printf ("enter second string: ");
  scanf("%s", str2);
  
  do
  {
    printf ("\n\n____ STRING OPERATIONS MENU____");
    printf ("\n 1 Find length of string");
    printf ("\n 2 Copy String");
    printf ("\n 3 Concatenate Strings");
    printf ("\n 4 Compare Strings");
    printf ("\n 5 Exit");
    
    printf ("\n\nEnter your choice: ");
    scanf ("%d" , &choice);
    
    switch(choice)
    {
      case 1:
        printf ("\nLength of first string = %zu" , strlen(str1));
        break;
        
      case 2:
        strcpy(str1,str2);
        printf ("\nAfter copying, second string = %s" , str1);
        break;
      
      case 3:
        strcat(str2, str1);
        printf("\nAfter concatenation = %s", str1);
        break;
        
      case 4:
        result = strcmp(str1, str2);
        
        if (result == 0)
          printf("\nBoth strings are equal.");
        else if(result > 0)
          printf("\nFirst string is greater than second string");
        else
          printf ("\nFirst string is lesser than second string");
        break;
        
      case 5:
        printf ("\nExiting program...");
        break;
        
      default:
        printf ("\nInvalid choice! Please enter a valid choice.");
    }
    
  } while (choice !=5);
  
  return 0;
}

