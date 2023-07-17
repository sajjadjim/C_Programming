#include<stdio.h>
int main()
{
    int array[5],i;
    printf("Enter Five number:");

    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]); // Enter Integer number
    }

    int *pointer;

    pointer=&array[0];

    for(i=0; i<5; i++)
    {
        printf("Value =%d\n",*pointer);  // Use pointer in Loop //
        pointer++;
    }
    getch();
    return 0;
}
