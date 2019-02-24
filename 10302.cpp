#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    while(scanf("%lld",&n)==1)
    {
        n=(n*n*(n+1)*(n+1))/4;

        printf("%lld\n",n);

    }

    return 0;
}

