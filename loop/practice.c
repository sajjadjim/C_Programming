#include<stdio.h>
int main()
{
    int sum=0,num,temp,r;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(sum==num)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    getch();
    return 0;
}
