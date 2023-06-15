#include<stdio.h>

struct person{
int age;
int salary;
}person[4];

int main()
{int i;

  for(i=1;i<=4;i++)
  {
      printf("Give information person %d:\n",i);
      printf("Enter age=");
      scanf("%d",&person[i].age);
      printf("Enter salary=");
      scanf("%d",&person[i].salary);

  }
printf("\n\n");

    for(i=1;i<=4;i++)
  {
      printf("Information person %d:\n",i);
      printf("Enter age=%d\n\n",person[i].age);

      printf("Enter salary=%d\n",person[i].salary);


  }

 return 0;

}
