#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
bool is_char(char c)
{
    if(c>=65&&c<=90) return false;
    else if(c>=97&&c<=122) return false;
    else
        return true;
}
int main()
{
    char arr[1000];
    while(gets(arr))
    {
        int word = 0,l = strlen(arr);
        for(int i=0; i<=l; i++)
        {
            if(is_char(arr[i]))
            {
                    if((arr[i-1]>=65&&arr[i-1]<=90)||(arr[i-1]>=97&&arr[i-1]<=122))
                    {
                        word++;
                    }
                    else
                        continue;
            }
            else
                continue;
        }
        printf("%d\n",word);
    }

    return 0;
}
