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
    int t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;

        n=n/10;
        ans=n%10;
        if(ans<0)
        {
            ans*=-1;
            cout<<ans<<endl;
        }
        else
           cout<<ans<<endl;

    }

    return 0;

}


