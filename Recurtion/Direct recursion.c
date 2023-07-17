#include<stdio.h>
void odd();
void even();

int main()
{
    odd();
    even();
}
int n=1;
void odd()
{
    if(n <= 10)
    {
        printf("%d ", n+1);
        n++;
        even();
    }
    return;
}
void even()
{
    if(n <= 10)
    {
        printf("%d ", n-1);
        n++;
        odd();
    }
    return;
}

