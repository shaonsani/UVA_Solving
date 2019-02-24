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
    int n,k,a,temp;
    while(scanf("%d%d",&n,&k)==2 && k>1)
    {
        a=0;
        temp=n;
        while(n>=k)
        {
            if(n%k!=0)
            {   a=n%k;
                n=n/k;
                temp+=n;

                n=n+a;

            }
            else
            {
                n=n/k;
                temp+=n;

            }

        }
        cout<<temp<<endl;

    }


    return 0;

}



