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
    int n;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        if(n>=101)
        cout<<"f91("<<n<<") = "<<(n-10)<<endl;
        else
        cout<<"f91("<<n<<") = "<<"91"<<endl;

    }
    return 0;

}





