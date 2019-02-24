#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,b,h,w,price,a;
    while(scanf("%ld %ld %ld %ld",&n,&b,&h,&w)==4)
    {

        long int cost=b+1;
        while(h>0)
        {
            cin>>price;
            for(int i=0; i<w; i++)
            {
                int check=0;
                cin>>a;
                if(a>=n)
                {
                    check=price*n;
                    if(cost>check)
                    {

                      cost=check;

                    }
                }
            }


            h--;
        }

        if(cost<=b)
        {
            cout<<cost<<endl;
        }
        else
        {
            cout<<"stay home"<<endl;
        }


    }



    return 0;
}

