#include<stdio.h>
int main()
{
int a[100],i,sum=0,n;
printf("Enter How many number you want?\n=");
scanf("%d",&n);
printf("Enter number=");
    for(i=0;i<n;i++)
    {

    scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++)
    {
     sum=sum+ a[i];
    }

    printf("The sum =%d\n",sum);
    printf("The avarage =%.2f\n",(float)sum/n);
}
