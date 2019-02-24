#include<bits/stdc++.h>
#include<iostream>
#include <sstream>
using namespace std;

int main()
{
    long long int t,f,a,b,c;

    cin>>t;
    while(t!=0)
    {
        long long int num=0;
        cin>>f;
        while(f!=0)
        {
            cin>>a>>b>>c;
            num+=a*c;
            f--;
        }
        cout<<num<<endl;

        t--;
    }





    return 0;
}




