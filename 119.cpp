#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,t;
    string s[10];
    cin>>t;
    while(t>0)
    {
        cin>>s[i];
        i++;
        t--;
    }

    for(i=0; i<t; i++)
    {
        cout<<s[i]<<endl;
    }



    return 0;
}
