#include "stdio.h"
int main() 
{
  int f=1,i,n=5;
  for(i=1;i<=n;i++)
  {
    f=f*i;
  }
  printf("factorial of number %d is %d",n,f);
  return 0;
}
