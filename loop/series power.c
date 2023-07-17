#include<stdio.h>
int main()
{
    int  x, i, s;
    printf("Enter a number=");
    scanf("%d",&x);
    int b =x-1;
    for(i=0;i<=b;i++)
    {
         s = pow(x,i);
         printf("%d + ",s);

    }
    printf("N^(n-1)");

    }
