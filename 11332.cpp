#include<bits/stdc++.h>
#include<iostream>
#include <sstream>
using namespace std;

int main()
{
    int t,a,b,c,d,e,f,g,h,i,j,k,num;


    while(scanf("%d",&num))
    {
        if(num==0)
        break;

        while(num>9)
        {
            a=num%10;
            b=num/10%10;
            c=num/100%10;
            d=num/1000%10;
            e=num/10000%10;
            f=num/100000%10;
            g=num/1000000%10;
            h=num/10000000%10;
            i=num/100000000%10;
            j=num/1000000000%10;
            num=a+b+c+d+e+f+g+h+i+j;

        }
        cout<<num<<endl;
    }





    return 0;
}


