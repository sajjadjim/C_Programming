#include<stdio.h>
int main()
{
    double num1,num2,result;
    char op;
    printf("  WELCOME TO MATH OPERATOR\n\n");


    printf("Choice the operator which you want to try (+,-,*,/) :");
    scanf("%c",&op);
    printf("\n");
    printf("Enter two number for calculate=");
    scanf("%lf %lf",&num1,&num2);
    switch(op)
    {
    case '+':
    {
        result=num1+num2;
        printf(" The substrac value =%2.lf+%.2lf=%.2lf",num1,num2,result);
        break;
    }
    case '-':
    {
        result=num1-num2;
        printf(" The minus value =%.2lf -%.2lf%=.2lf",num1,num2,result);
        break;
    }

    case '*':
    {
        result=num1*num2;
        printf("The Multiple value=%.2lf*%.2lf=%.2lf",num1,num2,result);
        break;
    }
    case '/':
    {
        result=num1/num2;
        printf(" THE Divide value is=%.2lf/%.2lf=%.2lf",num1,num2,result);
        break;
    }
    default :
        printf("Not a valied oprration");

    }
    return 0;

}
