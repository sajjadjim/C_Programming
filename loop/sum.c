#include<stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("Enter the last value=");
    scanf("%d",&n);
    for(i=1; i<=n;i++)
    {
        printf("%d+",i);
        sum=sum+i;
    }
    printf("=%d",sum);
    return 0;
}
