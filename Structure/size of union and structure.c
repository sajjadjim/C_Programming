#include<stdio.h>

union test1{
int x,y
}t1;

struct test2{
char name[10];
float x;
int y;
}t2;

union test3{
char name[10];
double x;
}t3;

struct test4{
int x,y,z;
double a;
}t4;

int main()
{
    printf("Size of T1=%d\n",sizeof(t1));
    printf("Size of T2=%d\n",sizeof(t2));
    printf("Size of T3=%d\n",sizeof(t3));
    printf("Size of T4=%d\n",sizeof(t4));
}
