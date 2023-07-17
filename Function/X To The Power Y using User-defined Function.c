#include<stdio.h>
int main()
{
    double base, exp;
    printf("Enter base=");
    scanf("%lf",&base);
    printf("Enter Exponent=");
    scanf("%lf",&exp);
    calculate_power(base,exp);

}
void calculate_power(double base, double exp)
{
    double result=1,i;
    printf("Result\n");
    for(i=1; i<exp; i++)
    {
        result=result* base;
        printf("%.2lf\n",result);
    }

}
