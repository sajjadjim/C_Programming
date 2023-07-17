#include<stdio.h>
int main()
{
   int row,column,i,j;
   int A[10][10],trans[10][10];
  printf("Enter row and column number=");
  scanf("%d %d",&row,&column);
   for(i=0; i<row; i++)
    {
       for(j=0; j<column; j++)
       {
           printf("A[%d][%d]=",i,j);
           scanf("%d",&A[i][j]);
       }
       printf("\n");
    }
   for(i=0; i<row; i++)
    {
         printf("\t");
       for(j=0; j<column;j++)
       {
          trans[j][i]=A[i][j];
       }
       printf("\n");
    }

printf("Transpose Of A matrix=");
      for(i=0; i<column; i++)
    {
         printf("\t");
       for(j=0; j<row;j++)
       {
          printf("%d ",trans[i][j]);
       }
       printf("\n");
       printf("\t\t");
    }


 return 0;
}
