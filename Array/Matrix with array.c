#include<stdio.h>
int main()
{
   int r,c;
   int A[3][4];
   printf("Enter 12 Number\n");
   for(r=0; r<3; r++)
    {
       for(c=0; c<4; c++)
       {
           printf("A[%d][%d]=",r,c);
           scanf("%d",&A[r][c]);
       }
       printf("\n");
    }
    printf("A=");
    for(r=0; r<3; r++)
        {
        printf("\t");
        for(c=0; c<4; c++)
        {
            printf("%d ",A[r][c]);
        }
        printf("\n");
        }
 return 0;
}
