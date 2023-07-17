#include<stdio.h>
int main()
{
    int x=56, y=90;

    // Before swapping
    printf("Value of X=%d\n",x);
    printf("Value of Y=%d\n",y);

 swap(&x,&y);

 printf("\n");
    // After swapping
    printf("Value of X=%d\n",x);
    printf("Value of Y=%d\n",y);


}
void swap(int *point1, int *point2)
{
    int temp;
    temp=*point1;
    *point1=*point2;
    *point2=temp;
}

