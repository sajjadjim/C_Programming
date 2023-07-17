#include <stdio.h>
#include <stdlib.h>
int main()
{

    float number[4];
    for(int i = 0; i < 4; i++)
    {

        scanf("%f", &number[i]);
    }
    float greatest = number[0], smallest = number[0];
    for(int i = 0; i < 4; i++)
    {
        if(number[i] > greatest)
        {
            greatest = number[i];
        }
        if(number[i] < smallest)
        {
            smallest = number[i];
        }
    }
    float sum = greatest + smallest;
    if(sum > 5 && sum < 9) {
        printf("Ground");
    } else if(sum >= 9)
    {
        printf("Roof");
    } else if(sum < 6)
     {
        printf("Too small");
    }
    return 0;
}
