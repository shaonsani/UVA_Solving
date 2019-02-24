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
    //init();
    int n,total;
    while(scanf("%d",&n)!= EOF)
    {
        vi vect;
        int a,b,c,mn=1000001;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            vect.pb(a);
        }
        sort(vec(vect));
        cin>>total;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(vect[i]+vect[j]==total && abs(vect[i]-vect[j])<mn)
                {
                    b=vect[i];
                    c=vect[j];
                    mn=abs(vect[i]-vect[j]);

                }

            }

        }
        cout<<"Peter should buy books whose prices are "<<b<<" and "<<c<<"."<<endl;
        cout<<endl;
        vect.clear();
    }


    return 0;

}


