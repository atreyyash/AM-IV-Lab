#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Write a program to find a positive root of equation x^2 - 12 logx - 12 = 0 using Regula - Falsi method and correct up to three decimal places

double fx(double x)
{
    return x*x - log10(x) - 12;
}

int main()
{
    cout<<"\tExperiment - 2(b)"<<endl;
    cout<<"\tMade By : Yash Atrey"<<endl;
    cout<<"\tRoll No. : 109-CSEA-19\n"<<endl;
    cout<<"Write a program to find a positive root of equation x^2 - 12 logx - 12 = 0 \nusing Regula - Falsi method and correct up to three decimal places\n"
<<endl;

    double x0 = 3, x1 = 4;
    double y0 = -3.47712, y1 = 3.39794;

    cout<<"Equation is x^2 - log(x) - 12 = 0"<<endl<<"Roots of Equation is : "<<endl;

    double x=0, y;

    while(1)
    {
        x = (x0*fx(x1)- x1*fx(0) / fx(x1) - fx(x0));

        if(abs((int)(x*1000) - (int)(x0*1000)) == 0 or abs((int)(x*1000) - (int)(x1*1000)) == 0)
        {
            cout<<x;
            break;
        }
        y = fx(x);
        if(y<0)
        {
            x0 = x;
        }
        else
        {
            x1 = x;
        }
    }

    return 0;
}
