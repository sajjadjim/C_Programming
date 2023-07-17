#include<stdio.h>
int main()
{
    int x;

    printf("Enter a number=");
    scanf("%d",&x);

    int *point;

    point=&x;

    printf("Value of x=%d\n",x);
    printf("Address of x=%d\n\n",&x);

    printf("Value of voilder=%d\n",*point);
    printf("Address of pointer=%d\n",&point);
}
