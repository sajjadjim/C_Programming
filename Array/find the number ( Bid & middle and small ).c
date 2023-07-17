#include<stdio.h>
int main()
{
    int n,i;
   // int array[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  printf("Enter how many number you want to Binary search?\n=");
     scanf("%d",&n);
     int array[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&array[i]);
     }
    int low_index=array[0],mid_index,high_index=array[n-1];
    int num=5;

    while(low_index<=high_index)
    {
        mid_index= ( low_index + high_index) / 2;
        if(num == array[mid_index])
        {
            break;
        }
        if(num < array[mid_index])
        {
            high_index=mid_index - 1 ;
        }
        else
        {
            low_index= mid_index + 1 ;
        }
    }
    if(low_index > high_index)
    {
        printf(" %d not in array \n",num);
    }
    else
    {
        printf("%d is found in the array . it is the %d th element of array.\n ",array[mid_index],mid_index+1);
    }
    return 0;
}
