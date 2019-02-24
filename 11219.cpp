#include<bits/stdc++.h>
#include<iostream>
#include <sstream>
using namespace std;

int main()
{
    int t,a,b,c,d,e,f,ca=1;

    cin>>t;
    while(t!=0)
    {
        scanf("%d/%d/%d",&a,&b,&c);
        scanf("%d/%d/%d",&d,&e,&f);
        int year=c-f;
        if(b<e)
        {
            year--;
        }
        else if(b==e)
        {

            if(a<d)
                year--;

        }
        if(year<0)
            cout<<"Case #"<<ca<<": Invalid birth date"<<endl;
        else if(year>130)
            cout<<"Case #"<<ca<<": Check birth date"<<endl;
        else
            cout<<"Case #"<<ca<<": "<<year<<endl;


        ca++;


        t--;
    }


    return 0;
}

