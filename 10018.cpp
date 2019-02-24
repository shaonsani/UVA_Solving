#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef set<int> sett;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

///not conflict for runtime
void init()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
}


int main()
{
    init();

    int t;
    cin>>t;
    while(t!=0)
    {   long long n,rev,org=0,rem=0,c=0;

        cin>>n;
        org=n;
        while(true)
        {   rev=0;
            while(org!=0)
            {

                rem=org%10;
                rev=rev*10+rem;
                org/=10;

            }
            if(n==rev)
                break;
            else
            {
                org=rev+n;
                n=rev+n;
                c++;
            }

        }

        cout<<c<<" "<<n<<endl;
        t--;
    }
    return 0;

}

