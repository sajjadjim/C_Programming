#include<stdio.h>
int main()
{
   int r,c,numberOFrows,numberOFcolumn;
   int A[10][10],B[10][10],C[10][10];
   printf("Enter the number of rows and column=");
   scanf("%d %d",&numberOFrows,&numberOFcolumn);
 //take input A matrix//
   printf("Enter elements for A matrix\n");
   for(r=0; r<numberOFrows; r++)
    {
       for(c=0; c<numberOFcolumn; c++)
       {
           printf("A[%d][%d]=",r,c);
           scanf("%d",&A[r][c]);
       }
       printf("\n");
    }
//Take input B matrix//
    printf("Enter elements for B matrix\n");
   for(r=0; r<numberOFrows; r++)
    {
       for(c=0; c<numberOFcolumn; c++)
       {
           printf("B[%d][%d]=",r,c);
           scanf("%d",&B[r][c]);
       }
       printf("\n");
    }

//printing A matrix
    printf("A=");
    for(r=0; r<numberOFrows; r++)
        {
        printf("\t");
        for(c=0; c<numberOFcolumn; c++)
        {
            printf("%d ",A[r][c]);
        }
        printf("\n");
        }

       printf("\n");
//printing B matrix
    printf("B=");
    for(r=0; r<numberOFrows; r++)
        {
        printf("\t");
        for(c=0; c<numberOFcolumn; c++)
        {
            printf("%d ",B[r][c]);
        }
        printf("\n");
        }
// Addition matrix
          for(r=0; r<numberOFrows; r++)
        {
        for(c=0; c<numberOFcolumn; c++)
        {
          C[r][c]=A[r][c]+B[r][c];
        }
        }
 // printing addition matrix
        printf("C= A + B\n");
        printf("C=");
        for(r=0; r<numberOFrows; r++)
        {
            printf("\t");
        for(c=0; c<numberOFcolumn; c++)
        {
        printf("%d ",C[r][c]);
        }
        printf("\n");
        }

 return 0;
}

