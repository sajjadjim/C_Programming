//1^2 * 2^2 * 3^2......N^2

#include<stdio.h>
int main()
{
    int i,n,result=1;
    printf("1^2 * 2^2 * 3^2......N^2\n");
    printf("Enter value N=");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        result=result *i*i;
    }
    printf("Result=%d\n",result);
    getch();

}
