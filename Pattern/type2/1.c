#include<stdio.h>
int main()
{
  int n,row,column;
  printf("Enter N=");
  scanf("%d",&n);
  for(row=n; row>=1; row--)
  {
     for(column=1; column<=row; column++)
     {
         printf("%d ",column);
     }
     printf("\n");
  }
return 0;
}
