#include<stdio.h>
int main()
{
    int first[10][10],second [10][10],result[10][10],c1,c2,r1,r2,i,j;
    printf("Enter first matrix row and column:");
    scanf("%d %d",&c1,&r1);
    printf("Enter second matrix row and column:");
    scanf("%d %d",&c2,&r2);
    while(c1!=r2)
    {
        printf("Error \n");
    printf("Enter first matrix row and column:");
    scanf("%d %d",&c1,&r1);
    printf("Enter second matrix row and column:");
    scanf("%d %d",&c1,&r1);

    }
    // first matrix value take
    printf("**First matrix value take**\n");
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
        printf("First[%d][%d]=",i,j);
        scanf("%d",&first[i][j]);
        }
       printf("\n");
    }
    //print matrix
    for(i=0;i<c1;i++)
    {
        printf("\t");
        for(j=0;j<r1;j++)
        {
      printf("%d ",first[i][j]);
        }
       printf("\n");
    }


        // second matrix value take
    printf("**Second matrix value take**\n");
    for(i=0;i<c2;i++)
    {
        for(j=0;j<r2;j++)
        {
        printf("Second[%d][%d]=",i,j);
        scanf("%d",&second[i][j]);
        }
       printf("\n");
    }
    //print matrix
    for(i=0;i<c2;i++)
    {
        printf("\t");
        for(j=0;j<r2;j++)
        {
      printf("%d ",second[i][j]);
        }
       printf("\n");
    }


return 0;
}
