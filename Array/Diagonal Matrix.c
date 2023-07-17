#include<stdio.h>
int main()
{
 printf("Enter Matrix Value\n");
    int A[3][3],i,j;
    int sum=0;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("A=");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    // addition diagonal number

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
                sum=sum+A[i][j];
        }

    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
                for(i=0; i<3; i++)
                {
                    for(j=0; j<3; j++)
                    {
                        if(i==j)
                            printf("Diagonal Matrix =%d\n",A[i][j]);
                    }

                }
        }

    }

    printf("Sum of Diagonal Of matrix=%d",sum);

    return 0;
}
