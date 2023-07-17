#include<stdio.h>
int main()
{
 int n,i;
 int Positive_num=0, Negative_num=0;
printf( "Please Enter the value of N (Array size):");
scanf("%d",&n);
int num[n];
printf("Please Enter the Array Elements:\n");

for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
}

for(i=0;i<n;i++)
{
if(num[i] >= 0)
{
Positive_num++;
}
else
{
Negative_num++;
}

}
printf("Total positive number=%d\n",Positive_num);
printf("Total positive number=%d\n",Negative_num);
return 0;
}
