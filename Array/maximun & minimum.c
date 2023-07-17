#include<stdio.h>
int main()
{
  int num[100],n,i;
  printf("How many number you want?\n=");
  scanf("%d",&n);
  printf("Enter %d Numbers=",n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&num[i]);
  }
  int max=num[0];

  for(i=0;i<n;i++)
  {
    if(max<num[i])
        max=num[i];
  }
    printf("Maximum Number =%d\n",max);

      int min=num[0];

  for(i=0;i<n;i++)
  {
    if(min>num[i])
        min=num[i];
  }
    printf("Minimum Number =%d\n",min);
int sum=max+min;
printf("Sum Of maximum and minimum number=%d ",sum);
return 0;
}

