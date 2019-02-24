#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef set<int> sett;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back
void init()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    init();
    int a,b,c;
    while(scanf("%d%d",&a,&b)==2)
    {
        float f;
        c=0;
        if(a==0 && b==0)
            break;
        for(int i=a; i<=b; i++)
        {
            f=sqrt(i);
            if(abs(f-int(f))==0)
                c++;
        }

        cout<<c<<endl;




    }


    return 0;

}




