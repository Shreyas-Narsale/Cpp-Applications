
#include<stdio.h>
#include<stdlib.h>

int* a = NULL;

void A()
{
  a = (int *) malloc(sizeof(int) *10) ;
  for(int i = 0; i< 10; i++)
  {
    a[i] = i;
  }
}

void B()
{
  printf("%d", a[8]);
}

int main()
{
  
  A();
  B();
  return 0;
}