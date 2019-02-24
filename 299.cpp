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
    int n;

    while ( scanf ("%d", &n) != EOF ) {
        int a [1000 + 5];

        for ( int i = 0; i < n; i++ )
            scanf ("%d", &a [i]);

        int cnt = 0;

        for ( int i = 0; i < n; i++ ) {
            for ( int j = i + 1; j < n; j++ )
                if ( a [i] > a [j] ) cnt++;
        }

        printf ("Minimum exchange operations : %d\n", cnt);
    }

    return 0;
}



