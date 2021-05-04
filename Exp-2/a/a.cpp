#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Write a program to find the real roots of the equation x^3-2x-5=0 by bisection method and correct up to three decimal places

int main()
{
    cout<<"\t\t\t\t\t\tExperiment - 2"<<endl;
    cout<<"Yash Atrey"<<endl;

    double x0=2, x1=3;
    double y0=-1, y1=16;

    cout<<"The equation is x^3 - 2x - 5 = 0"<<endl<<"The Root is : "<<endl;

    while(abs((int)(y0*100) - (int)(y1*1000)) > 0)
    {
        double x = (x0 + x1) / 2;
        double y = (double)x*x*x - 2.0*x - 5.0;
        if(y<0)
        {
            x0 = x;
        }
        else
        {
            x1=x;
        }
        y0=y1;
        y1=y;
    }
    cout<<x0;
    return 0;
}
