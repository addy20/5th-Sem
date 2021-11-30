#include<stdio.h>
int main()
{
  
  int x=6.7;
  int y=1.2;
  int z=2.3;
  int *p;
  
  p=&x;
  p=&y;
  p=&z;

  printf("Values of x = %d\n",x);
  printf("Values at *p = %d\n",*p);
  printf("Address in p = %p\n",p);
    
  return 0;
  
}
