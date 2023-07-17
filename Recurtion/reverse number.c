#include <stdio.h>
int main()
{
    int n;
    printf("Enter number=");
    scanf("%d",&n);
   rfunc(n);  // 1) function call from main

   return 0;
}

int rfunc(int a)  //2) recursive function
{
    if(a==0)
        return 0;
    else
    {
        printf("%d ",a);
        return rfunc(a-1); // 3) recursive call is made
    }
}
