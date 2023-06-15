#include<stdio.h>
int main()
{
    int num,i;
    int a[32];

    printf("Enter a desimal number=");
    scanf("%d",&num);

    printf("\nHexa-Desimal=%x \n",num);
    printf("\nOctal=%o \n",num);

    for(i=0;num>0; i++)
    {
        a[i]=num%2;
        num=num/2;
    }
    printf("\nBinary of Given Number is=");
    for(i=i-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }
printf("\n");
    return 0;
}

