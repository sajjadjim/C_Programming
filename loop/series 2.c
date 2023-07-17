#include<stdio.h>
int main ()
{
    int sum=0,n,a=1;
    printf("Enter the series last value=");
    scanf("%d",&n);
    printf("1+2+3.....+N",n);
    while(a<=n)
    {
        sum=sum+a;
        a=a+1;
    }
    printf("=%d",sum);
    getch();
}
