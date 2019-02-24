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
    int arr[9],ans[6];
    while(scanf("%d %d %d %d %d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8])==9)
    {
        int sum=0,mini=1000007,c=1;

        for(int i=0; i<9; i++)
        {
            sum+=arr[i];
        }
        ans[0]=sum-arr[0]-arr[5]-arr[7];
        ans[1]=sum-arr[0]-arr[4]-arr[8];
        ans[2]=sum-arr[2]-arr[3]-arr[7];
        ans[3]=sum-arr[2]-arr[4]-arr[6];
        ans[4]=sum-arr[1]-arr[3]-arr[8];
        ans[5]=sum-arr[1]-arr[5]-arr[6];


        for(int i=0; i<6; i++)
        {
            if(ans[i]<mini)
                mini=ans[i];
        }

        while(c!=0)
        {
            if(mini==ans[0])
            {
                cout<<"BCG "<<mini<<endl;
                break;
            }
            if(mini==ans[1])
            {
                cout<<"BGC "<<mini<<endl;
                break;
            }
            if(mini==ans[2])
            {
                cout<<"CBG "<<mini<<endl;
                break;
            }
              if(mini==ans[3])
            {
                cout<<"CGB "<<mini<<endl;
                break;
            }
              if(mini==ans[4])
            {
                cout<<"GBC "<<mini<<endl;
                break;
            }
              if(mini==ans[5])
            {
                cout<<"GCB "<<mini<<endl;
                break;
            }
            c--;
        }



    }

    return 0;

}

