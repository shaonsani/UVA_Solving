#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long  t,s,spd,cas=1;
    cin>>t;
    while(t>0)
    {   long long  maxi=0,test=0;
        cin>>s;
        for(int i=0; i<s; i++)
        {
            cin>>spd;
            if(maxi<spd)
            {
              maxi=spd;

            }

        }
        cout<<"Case "<<cas<<": "<<maxi<<endl;


         cas++;
        t--;
    }




    return 0;
}
