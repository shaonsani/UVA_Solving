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
int check(int n)
{
    int i2=0,i3=0,i5=0,no;
    int c2=2,c3=3,c5=5;
    int arr[n];
    arr[0]=1;
    for(int i=1; i<n; i++)
    {
     no=min(c2,min(c3,c5));
     arr[i]=no;
     if(no==c2)
     {
      i2++;
      c2=arr[i2]*2;
     }
     if(no==c3)
     {
      i3++;
      c3=arr[i3]*3;
     }
     if(no==c5)
     {
      i5++;
      c5=arr[i5]*5;
     }

    }
    return no;



}

int main()
{
    init();
    int ugly=check(1500);
    cout<<"The 1500'th ugly number is "<<ugly<<"."<<endl;

    return 0;

}


