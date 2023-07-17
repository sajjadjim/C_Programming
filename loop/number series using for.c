#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the last value=");
    scanf("%d",&n);
    for (i=1; i<=n ; i++)
    {
        sum=sum+i*i;

    }
    printf("sum= %d",sum);

    return 0;
}
