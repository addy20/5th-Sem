#include<stdio.h>
int main()
{
  
  int x=45;
  int y=12;
  int z=23;
  int *p;
  
  p=&x;

  printf("Values of x = %d\n",x);
  printf("Values of p = %d\n",*p);
  printf("Address in p = %p\n",p);
    
  return 0;
  
}
