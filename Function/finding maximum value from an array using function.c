#include<stdio.h>
int main()
{
    int num[]={50,80,90,60,70};

   int maximumvalue= maximum(num);

   printf("Maximum value=%d",maximumvalue);

}
int maximum(int num[])
{
    int i;
    int max=num[0];
    for(i=1;i<5;i++)
    {
       if(max<num[i])
        max=num[i];
    }
    return max;
}
