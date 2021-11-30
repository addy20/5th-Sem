#include<stdio.h>
int main()
{
  int x=89;
  int *p1,*p2,*p3;
  p1=&x;
  p2=&x;
  p3=&x;
  
  printf("Values in p1 = %p\n",p1);
  printf("Values at *p1 = %d\n",*p1);
  printf("Values in p2 = %p\n",p2);
  printf("Values at *p2 = %d\n",*p2);
  printf("Values in p3 = %p\n",p3);
  printf("Values at *p3 = %d\n",*p3);

  return 0;
}
