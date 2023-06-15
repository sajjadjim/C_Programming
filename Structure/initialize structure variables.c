#include<stdio.h>
struct person
{
    int age;
    int salary;
} person1,person2,person3;

int main()
{
    struct person person1= {27,3456};

    // person 1
    printf("Enter person1:\n");

    printf("%d\n",person1.age);
    printf("%d\n",person1.salary);

    // element wise assignment
    person2.age=34;
    person2.salary=57986;

  // person 2
    printf("\nEnter person 2:\n");

    printf("%d\n",person2.age);
    printf("%d\n",person2.salary);

    // structure wise assignment
    person3=person2;

    printf("\nPerson 3:\n");

    printf("%d\n",person3.age);
    printf("%d\n",person3.salary);

    printf("\nThank YOU");

    return 0;

}

