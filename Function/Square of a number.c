#include<stdio.h>
double triangle(double a, double b);
int main()
{
    double  base, height,area;
    printf("Enter the base=");
    scanf("%lf",&base);


    printf("Enter the height=");
    scanf("%lf",&height);
    area = triangle(base,height);

    printf("The area of tr-Angle=%.2lf",area);

}
double triangle(double a, double b)
{
    return 0.5* a * b;
}
