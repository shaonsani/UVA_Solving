#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef set<int> sett;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back
char a[]= {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};

void init()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
}

char fuu(char c)
{
    for(int i=0; i<47; i++)
    {
        if(a[i]==c)
            return a[i-1];
    }
    return c;
}

int main()
{
    init();

    char ch[10005];
    while(gets(ch))
    {
        int ln=strlen(ch);
        for(int i=0; i<ln; i++)
        {
         ch[i]=fuu(ch[i]);
        }
        cout<<ch<<endl;

    }
    return 0;

}




