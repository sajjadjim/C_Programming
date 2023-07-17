//1*2 + 2*3 + 3*4.......n1*n2 = ?
#include<stdio.h>
int main()
{
    int sum=0,n1,n2,a=1,b=2;
    printf("Enter last two value=");
    scanf("%d %d",&n1,&n2);
    printf("1*2 + 2*3 + 3*4.......%d*%d",n1,n2);
    while(a<=n1 && b<=n2)
    {
        sum = sum + a*b;
        a=a+1;
        b=b+1;

    }
    printf("=%d",sum);
    getch();
}
