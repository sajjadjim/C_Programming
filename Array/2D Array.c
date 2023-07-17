#include<stdio.h>
int main()
{
    int A[3][4]={{10,20,30,40},{11,22,33,44},{12,34,56,78}};
    int row,col;
    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }

}
