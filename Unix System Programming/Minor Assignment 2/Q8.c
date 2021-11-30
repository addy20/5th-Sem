#include<stdio.h>
int main()
{
  int a,b,c;
  a=12;
  b=25;
  c=18;
  int *ptr;
  
  /* CASE1 */
  ptr=&a;
  printf("Value at *ptr before incrementing = %d\n",*ptr);
  printf("Value of a = %d\n",a);
  *ptr=*ptr+10;
  printf("Value at *ptr after incrementing = %d\n",*ptr);
  printf("Value of a = %d\n",a);
  
  /* CASE2 */
  ptr=&b;
  printf("Value at *ptr before incrementing = %d\n",*ptr);
  printf("Value of b = %d\n",b);
  *ptr=*ptr+10;
  printf("Value at *ptr after incrementing = %d\n",*ptr);
  printf("Value of b = %d\n",b);
  
  /* CASE3 */
  ptr=&c;
  printf("Value at *ptr before incrementing = %d\n",*ptr);
  printf("Value of c = %d\n",c);
  *ptr=*ptr+10;
  printf("Value at *ptr after incrementing = %d\n",*ptr);
  printf("Value of c = %d\n",c);
  

  return 0;
}
