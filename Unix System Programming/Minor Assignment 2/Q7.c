#include<stdio.h>
int main()
{
  float x = 8.6;
  float *p1,*p2,*p3;
  p1=&x;
  p2=&x;
  p3=&x;
  
  printf("Values in p1 = %p\n",p1);
  printf("Values at *p1 = %f\n",*p1);
  printf("Values in p2 = %p\n",p2);
  printf("Values at *p2 = %f\n",*p2);
  printf("Values in p3 = %p\n",p3);
  printf("Values at *p3 = %f\n",*p3);

  return 0;
}
