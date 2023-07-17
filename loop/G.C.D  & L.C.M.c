#include <stdio.h>

int main()
{
    int num1, num2, GCD, LCD,n1,n2,temp;

    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    n1=num1;
    n2=num2;

    while(n2!=0)
    {
        temp=n1%n2;
        n1=n2;
        n2=temp;
    }
    GCD=n1;
    LCD=(num1*num2)/GCD;
    printf("GCD of %d and %d = %d\n",num1,num2,GCD);
    printf("LCM of %d and %d = %d\n",num1,num2,LCD);

    return 0;
}
