#include<bits/stdc++.h>
using namespace std;

int main()
{

    double hr,mins,ang;
    while(scanf("%lf:%lf",&hr,&mins)==2)
    {
        if(hr==0 && mins==00)
            break;
        hr=(hr*30)+((mins/60)*30);
        mins=mins*6;
        ang=hr-mins;
        if(ang<0)
            ang=ang*-1;
        if(ang>180)
            ang=360-ang;

        printf("%.3lf\n",ang);

    }

    return 0;
}
