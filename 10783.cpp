#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int t,a,b,ca=1;
    cin>>t;
    while(t!=0)
    {
        int sum=0;
        cin>>a;
        cin>>b;

        for(int i=a; i<=b; i++)
        {
            if(i%2==1)
            {
                sum+=i;
            }

        }
        cout<<"Case "<<ca<<": "<<sum<<endl;
        ca++;

        t--;
    }


    return 0;
}
