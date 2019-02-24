#include<bits/stdc++.h>
using namespace std;

int max(int x,int y);

int lcs(char *A, char *B,int m,int n)
{
    int L[m+1][n+1];

    int j,i;

    for(i=0; i<=m; i++)
    {
        for(j=0; i<=n; j++)
        {
            if(i==0 || j==0)
            {
                L[i][j]=0;
            }

            else if(A[i-1]==B[j-1])
            {
                L[i][j]=L[i-1][j-1]+1;
            }
            else
            {
                L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
        }


    }
    return L[m][n];



}

int max(int x,int y)
{
    return (x>y)? x:y;
}



int main()
{
    char A[1000];
    char B[1000];

    cin>>A>>B;
    int m=strlen(A);
    int n=strlen(B);

    int c=lcs(A,B,m,n);
    cout<<c<<endl;




    return 0;

}
