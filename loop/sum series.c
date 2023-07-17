#include<stdio.h>
int main()
{
    double i,n,sum=0;
    printf("Enter the last value=");
    scanf("%lf",&n);
    printf("1+ 1/2 +1/3.......1/%.lf",n);
    for (i=1; i<=n ; i++)
    {
sum= sum+(1/i);

    }
    printf(" sum= %.2lf",sum);

    return 0;
}
