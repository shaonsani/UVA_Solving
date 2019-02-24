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
    long long t,b,a,n1,n2;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        n1=0,n2=0;
        cin>>a>>b;

        if((b>a) || (a-b)%2!=0)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            n1=(a-b)/2;
            n2=n1+b;
             cout<<n2<<" "<<n1<<endl;
        }




    }


    return 0;

}


