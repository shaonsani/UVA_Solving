#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{

    long long a,b,c,d;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(!a && !b)
            break;
        int carry=0,f=0;
        while(a || b)
        {
            c=a%10;
            a=a/10;
            d=b%10;
            b=b/10;
            int sum=c+d+f;
            if(sum>9)
            {
                f=1;
                carry++;
            }
            else
                f=0;
        }

        if(!carry)
            cout<<"No carry operation."<<endl;
        else if(carry==1)
        cout<<"1 carry operation."<<endl;
        else
        cout<<carry<<" carry operations."<<endl;



    }

    return 0;
}







