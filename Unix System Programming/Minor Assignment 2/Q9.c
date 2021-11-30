#include<stdio.h>
int main()
{
  int a,b,c;
  a=12;
  b=52;
  c=8;
  int *ptr1,*ptr2,*ptr3;
  
  /* CASE1 */
  ptr1=&a;
  printf("Value at *ptr1 before incrementing = %d\n",*ptr1);
  printf("Value of a = %d\n",a);
  *ptr1=*ptr1+10;
  printf("Value at *ptr1 after incrementing = %d\n",*ptr1);
  printf("Value of a = %d\n",a);
  
  /* CASE2 */
  ptr2=&b;
  printf("Value at *ptr2 before incrementing = %d\n",*ptr2);
  printf("Value of b = %d\n",b);
  *ptr2=*ptr2+10;
  printf("Value at *ptr2 after incrementing = %d\n",*ptr2);
  printf("Value of b = %d\n",b);
  
  /* CASE3 */
  ptr3=&c;
  printf("Value at *ptr3 before incrementing = %d\n",*ptr3);
  printf("Value of c = %d\n",c);
  *ptr3=*ptr3+10;
  printf("Value at *ptr3 after incrementing = %d\n",*ptr3);
  printf("Value of c = %d\n",c);
  
  
  return 0;
}
