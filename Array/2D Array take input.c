#include<stdio.h>
int main()
{
   int r,c;
   int A[3][3];
   printf("~~~  Enter 2D Array Number ~~~\n\n");
   for(r=0; r<3; r++)
    {
    for(c=0; c<3; c++)
    {
        printf("Enter value = ");
    scanf("%d",&A[r][c]);
    }
    printf("\n");
    }

    // Print Value

    printf("Value =\n");
     for(r=0; r<3; r++)
    {
    for(c=0; c<3; c++)
    {
    printf("\t%d",A[r][c]);
    }
    printf("\n");
    }
 return 0;
}
