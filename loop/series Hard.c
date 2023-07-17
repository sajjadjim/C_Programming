//1-2+3-4..........N
//(1+3+5.....N)-(2+4+6.....N)

#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
    printf("1-2+3-4+-6........N\n");
    printf("Enter the series last number value N=");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            even=even+i;
            else
            odd=odd+i;
    }

    printf("Result=%d\n",odd-even);
}
