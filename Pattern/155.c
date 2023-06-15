#include<stdio.h>
int main()
{
  int n,row,column;
  printf("Enter the number of N=");
  scanf("%d",&n);
  for(row=1;row<=n;row++)
  {
   // space  print
      for(column=1;column<=n-row;column++)
      {
          printf(" ");
      }
     for(column=1;column<=2*row-1;column++)
     {
         printf("%d",column);

      }
    printf("\n");
}
  for(row=n-1;row>=1;row--)
  {
   // space  print
      for(column=1;column<=n-row;column++)
      {
          printf(" ");
      }
     for(column=1;column<=2*row-1;column++)
     {
         printf("%d",column);

      }
    printf("\n");
}
}


