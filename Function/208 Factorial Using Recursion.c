#include<stdio.h>
int main()
{
    int i,result;

printf("Enter a Number=");
scanf("%d",&i);

result=fact(i);

    printf("Factorial of %d is=%d",i,result);
    getch();
}

int fact (int n)
{
    if(n==1)
    {
        return 1;
    }
    else
        return n*fact(n-1);
}
