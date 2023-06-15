#include<stdio.h>
struct person{
char name[30];
int age;
int salary;
}person1,person2;

int main()
{
  strcpy(person1.name,"S.M. Sajjad Hossain JIM");
  person1.age=24;
  person1.salary=12550;
  show(person1);

  strcpy(person2.name,"Mr. Kasem Mia");
  person2.age=24;
  person2.salary=13550;
  show(person2);


}
void show(struct person p)
{
    printf("Name=%s\n",p.name);
    printf("Age=%d\n",p.age);
    printf("Salary=%d\n\n",p.salary);
}
