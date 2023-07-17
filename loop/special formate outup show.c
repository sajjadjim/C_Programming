
#include<stdio.h>
int main()
{
    char a='1';
    do
    {
        int b=a++;
        printf("The value of a=\"%c\" & b=\"%05d\"\n",a,b);
    }
    while((a++)<57);
    return 100;
}
/*

#include<stdio.h>
int main()
{
char a='1';
while(a<58)
{
int b=a++;
printf("a=\"%c\" & b \"%05d\" \n ",b,a);

if(a=='5')

break;
}

return 0;
}
*/
