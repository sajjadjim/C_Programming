#include<stdio.h>
int main()
{
   int num,temp,sum=0,rem;
scanf("%d",&num);
temp=num;
while(temp!=0)
{
rem=temp%10;
sum=rem+sum*10;
temp=temp/10;
}
printf("%d",sum);

}
