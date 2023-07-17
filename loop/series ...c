#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter thr last value of series=");
    scanf("%d",&n);
    printf("1  + 3 + 5.....N");
    for(i=1 ; i<=n; i=i+2)
    {
        sum=sum+i;
    }
    printf("=%d",sum);
    return 0;
}
