#include<stdio.h>
int main()
{
    int num[]={50,80,90,60,70};

    show(num);
}
void show(int num[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",num[i]);
    }
}
