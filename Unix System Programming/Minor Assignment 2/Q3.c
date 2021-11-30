/* Programmer name-Aditya Singh      Date Completed: 30 NOV 2021
 * Instructor - Dr. Trilok Nath Pandey 
 * Reg No -1941012782        
 * Sec - K
 *
 * Program to Swap and print values and address of variable
 */



#include<stdio.h>

int main()
{
  int a,b;
  printf("Enter a = ");
  scanf("%d",&a);
  printf("Enter b = ");
  scanf("%d",&b);
  
  
  printf("Before Swapping:\n");
  printf("Value of a = %d\tAddress of a = %p\n",a,&a);
  printf("Value of b = %d\tAddress of b = %p\n",b,&b);
  /* Swapping values of variable */
  
  a=a^b;
  b=a^b;
  a=a^b;
  
  /* Printing Values after swapping */
  printf("After Swapping:\n");
  printf("Value of a = %d\tAddress of a = %p\n",a,&a);
  printf("Value of b = %d\tAddress of b = %p\n",b,&b);
  
  

   return 0;
}
