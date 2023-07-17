#include<stdio.h>
int main()
{
    int n,a[30],i;
    printf("How many fibonnakki number:");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
return 0;

}
