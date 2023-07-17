#include <stdio.h>
int main()
{
    int n,i,minimum,min_position,maximum,max_position;
    printf("Input the length of the array: ");
    scanf("%d", &n);
// Array Size
    int num[n];
    printf("\nInput the array elements (Different type): ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    // Default position and minimum value initialization
    minimum = num[0];
    min_position = 0;
    for(i = 0; i < n; i++)
    {
        if(minimum > num[i])
        {
            minimum = num[i];
            min_position = i;
        }
    }
    printf("Maximum Value: %d\n", minimum);
    printf("Position of the element: %d\n\n", min_position+1);
// Default position and maximum value initialization
    maximum = num[0];
    max_position = 0;

    for(i = 0; i < n; i++)
    {
        if(maximum < num[i])
        {
            maximum = num[i];
            max_position = i;
        }
    }
    printf("Maximum Value: %d\n", maximum);
    printf("Position of the element: %d\n", max_position+1);

    return 0;
}

