#include<stdio.h>

union test{
int a,b;
}t1;

int main()
{

  t1.a=25;
  printf("t1.a=%d\n",t1.a);
  printf("t1.b=%d\n",t1.b);

  printf("\n");

    t1.b=50;
  printf("t1.a=%d\n",t1.a);
  printf("t1.b=%d\n",t1.b);
}
