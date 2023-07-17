#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number=");
    scanf("%d",&n);

    int result=factorial(n);

    printf("Factorial of %d = %d",n,result);

}
int factorial(int i)
{
    if (i==1)
    {
        return 1;
    }
    else
        return i*factorial(i-1);

}
