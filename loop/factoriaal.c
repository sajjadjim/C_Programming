#include<stdio.h>
int main()
{
    int i,num,fact=1;
    printf("Enter Any Positive number:");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        fact=fact*i;
    }
    printf("%d\n",fact);
    return 0;
}
