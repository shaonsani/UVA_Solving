#include<bits/stdc++.h>
using namespace std;


int main()
{


    double dpre2,dp,loan,arr[101];
    int mn,dl,dpre,month=0;
    while(1)
    {
        scanf("%d %lf %lf %d",&dl,&dp,&loan,&dpre);
        if(dl<0)
            break;

        while(dpre--)
        {
            cin>>mn>>dpre2;
            for(int i=mn; i<101; i++)
            {
                arr[i]=dpre2;

            }

        }



        int month=0;
        double monthly_ins=loan/dl;
        double car_actual_value=(dp+loan)*(1-arr[0]);
        double loan2=loan;
        while(car_actual_value<loan2)
        {

            month++;
            loan2=loan2-monthly_ins;
            car_actual_value= car_actual_value*(1-arr[month]);
        }
       cout << month << " month";
		if (month != 1)
			cout << "s";

        cout<<endl;

    }




    return 0;
}
