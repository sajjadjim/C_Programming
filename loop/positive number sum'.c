#include<stdio.h>
int main()
{
int num,temp,sum=0,r;
printf("Enter Any number:");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
   r=temp%10;
   sum=sum+r;
   temp=temp/10;
}
printf("Sum Of Digit=%d",sum);
getch();
return 0;
}
