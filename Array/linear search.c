#include<stdio.h>
int main()
{
    int num[1000],n,i,value;
// Enter the array size
    printf("How many number you want=");
    scanf("%d",&n);
// Enter array element
    printf("\n");
    printf("Enter %d number=",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
// Which number you want to see position print it
    printf("Enter the value:");
    scanf("%d",&value);
    printf("\n");
// Print The position Of number
    int pos=-1;  // Initialize the position Default = -1
    for(i=0; i<n; i++)
    {
        if(value==num[i]) // Check the Condition
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("The value not found\n");
    }

    else
    {
        printf("The %d position is %d.\n",value,pos);
    }
    return 0;
}
