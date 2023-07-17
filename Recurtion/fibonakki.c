#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a digit for fibonacci series: ");
    scanf("%d",&n);

    fibonacci(n);
    for (i=0; i<n; i++)
    {
        printf(" %d ",fibonacci(i));   // 0  1 . 1  2  3  5  8  13  21  34
    }
    return 0;
}
int fibonacci(int i)
{
    if (i==0)
    {
        return 0;
    }

    if (i==1)
    {
        return 1;
    }
    return fibonacci(i - 1) + fibonacci(i - 2);
}
