#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter two number= ");

    scanf("%d %d",&num1,&num2);

    printf("The sum is=%d \n",sum(num1,num2));
}

// Return_type Function_name [Argument] //

int sum(int a,int b)
{
    return a+b ;
}
