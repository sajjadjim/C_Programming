#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter two number= ");

    scanf("%d %d",&num1,&num2);

  int result= sum(num1,num2);

    printf("The sum is=%d \n",result);
}


int sum(int a,int b)
{
    return a+b ;
}
