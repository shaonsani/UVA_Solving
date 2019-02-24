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

int main ()
{
    int t,c=1;
    cin>>t;
    while (t!=0 )
    {
        int s,n,k,p;
        cin>>n>>k>>p;
        s=k+p;
        while(s>n)
        {
            s=s-n;
        }
        cout<<"Case "<<c<<": "<<s<<endl;
        c++;
        t--;
    }

    return 0;
}




