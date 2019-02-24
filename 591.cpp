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
    int n,t=1;
    while(scanf("%d",&n)==1 && n!=0)
    {
        int arr[n],b,c=0,sum=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        b=sum/n;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>b)
            {
                c+=(arr[i]-b);
            }
        }
        cout<<"Set #"<<t<<endl;
        cout<<"The minimum number of moves is "<<c<<"."<<endl;
        cout<<endl;
        t++;


    }

    return 0;

}



