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
        int c=0,arr[n],ans[3001],i;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0; i<n-1; i++)
        {
            ans[i]=abs(arr[i+1]-arr[i]);

        }
        sort(ans,ans+i);
        for(i=0; i<n-1; i++)
        {
            if(ans[i]==ans[i+1])
            {
                c++;
                break;
            }
        }
        if(c>0)
        cout<<"Not jolly"<<endl;
        else
        cout<<"Jolly"<<endl;
    }

    return 0;

}

