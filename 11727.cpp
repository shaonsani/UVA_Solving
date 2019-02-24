#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,z;
    cin>>t;
    int c=1;
    while(t>0)
    {
        cin>>x>>y>>z;
        if(x>y && y>z)
        {
            printf("Case %d: %d\n",c,y);
            c++;
        }
        else if(x>y && z>y && x>z)
        {
            printf("Case %d: %d\n",c,z);
            c++;
        }
        else if(x>y && z>y && z>x)
        {
            printf("Case %d: %d\n",c,x);
            c++;
        }
///////////////////////////////////////////////////////////////

        else if(x<y && y<z )
        {
            printf("Case %d: %d\n",c,y);
            c++;
        }

        else if(x<y && z<y && x<z )
        {
            printf("Case %d: %d\n",c,z);
            c++;
        }
        else if(x<y && z<y && x>z )
        {
            printf("Case %d: %d\n",c,x);
            c++;
        }
        /////////////////////////////////////////
        else if(x==y || y==z || x==z)
        {
            if(x==z)
            {
                printf("Case %d: %d\n",c,x);

            }
            else
            {
                printf("Case %d: %d\n",c,y);
            }
            c++;
        }

        t--;
    }



    return 0;
}
