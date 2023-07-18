#include<stdio.h>
struct student{
int data;
struct node *next;
} a,b,c,d;
int main(){
a.data=10;
b.data=20;
c.data = 30;
d.data = 40;

a.next = &b;
b.next = &c;
c.next = &d;
d.next = NULL;

printf("A Data =%d \n",a.data);
printf("B Data =%d \n",b.data);
printf("C Data =%d \n",c.data);
printf("D Data =%d \n\n",d.data);

printf("lOCATION OF A address =%x \n",a.next);
printf("lOCATION OF B address =%x \n",b.next);
printf("lOCATION OF C address =%x \n",c.next);
printf("lOCATION OF D address =%x \n",d.next);

return 0;
}
