#include<stdio.h>
struct person{
char name[20];
int age;
int salary;
}person[4];

int main()
{int i;
  for(i=1;i<=4;i++)
  {
      printf("Give information person %d:\n",i);

      fflush(stdin);

      printf("Enter name=");
      gets(person[i].name);
      printf("Enter age=");
      scanf("%d",&person[i].age);
      printf("Enter salary=");
      scanf("%d",&person[i].salary);

  }
printf("\n\n");

    for(i=1;i<=4;i++)
  {
      printf("Information person %d:\n",i);

      printf("Name=%s\n",person[i].name);
      printf("Age=%d\n",person[i].age);
      printf("Salary=%d\n\n",person[i].salary);
  }
getch();
 return 0;

}

