#include<stdio.h>
int main()
{
    int x=56, y=90, temp;

    int *point1=&x, *point2=&y;

    // Before swapping
    printf("Value of X=%d\n",*point1);
    printf("Value of Y=%d\n",*point2);

    printf("\n");

    temp=*point1;
    *point1=*point2;
    *point2=temp;

    // After swapping
    printf("Value of X=%d\n",*point1);
    printf("Value of Y=%d\n",*point2);

}
