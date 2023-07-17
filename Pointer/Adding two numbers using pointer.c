#include<stdio.h>
int main()
{
    int x=56 ,y=4, sum;

    int *point1=&x,*point2=&y;

    sum= *point1 +  *point2;

    printf("SUM of two number=%d",sum);

    getch();

}
