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
    int n,a;
    while(scanf("%d",&n)==1)
    {
        a=0;
        vi vect;
        if(n<0)
            break;
        if(n==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            while(n>0)
            {
                a=n%3;
                vect.pb(a);
                n=n/3;

            }
            int sz=vect.size();
            for(int i=sz-1; i>=0; i--)
            {
                cout<<vect[i];
            }
            cout<<endl;
        }


    }
    return 0;

}



