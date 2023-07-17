#include<stdio.h>
int main()
{
    char s1[]="S. M. SAJJAD HOSSAIN JIM";

    display(s1);

}

void display(char s2[])

{
    int i=0;
  while(s2[i]!='\0')
  {
      printf("%c",s2[i]);
      i++;
  }
}
