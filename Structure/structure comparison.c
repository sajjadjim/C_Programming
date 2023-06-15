#include<stdio.h>

    struct person{
    int age;
    int salary;
    }person1,person2,person3;

int main()
{
    // person 2
printf("Enter person2:\n");
printf("Enter age=");
scanf("%d",&person1.age);
printf("Enter salary=");
scanf("%d",&person1.salary);

 // person 2
printf("\nEnter person 2:\n");
    printf("Enter age=");
scanf("%d",&person2.age);
printf("Enter salary=");
scanf("%d",&person2.salary);

// Compare strusture
if (person1.age==person2.age)
    printf("\nBoth age are equal\n");

else if(person1.salary==person2.salary)
    printf("\nBoth Salary are Equal\n");

    else
        printf("\nNot equal \n");

    printf("\nThank YOU");

  return 0;

}
