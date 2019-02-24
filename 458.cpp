
#include<string.h>
#include<stdio.h>


int main()
{

    char shane[1000];
    while(gets(shane))
    {
        int ln=strlen(shane);
        for(int i=0; i<ln; i++)
        {
            printf("%c",shane[i]-7);
        }

        printf("\n");

    }

    return 0;
}


