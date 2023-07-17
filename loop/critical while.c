#include<stdio.h>
int main()
{
    int ID;
    int hello=1;

    scanf("%d",&ID);
    ID = (ID%3)+3;

    while(ID--)
    {
        printf("%d\n",ID);
        for(hello = 1; hello< 5; hello=hello*2)
        {
            if(ID%2 == 0)
                continue;
            printf("!Double Trouble without break!\n");
        }

        if(ID%2 == 1)
            printf("\t Ki hoitese kisui bujhtesi na. \t...\n");
    }
    return 0;
}
