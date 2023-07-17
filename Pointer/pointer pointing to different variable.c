#include<stdio.h>
int main()
{
    int x=23, y=67, z=89;

    int *point;

    point=&x;
    printf("X=%d\n",*point);

        point=&y;
    printf("Y=%d\n",*point);


        point=&z;
    printf("Z=%d\n",*point);
}
