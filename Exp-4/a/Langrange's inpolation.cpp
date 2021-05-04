#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/* Write a program to evaluate y for x=10 using Langrange's Interpolation formula, from the following data
        x :     5   6   9   11
        y :     12  13  14  16*/

int main()
{
    int x[] = {5, 6, 9, 11};
    int y[] = {12, 13, 14, 16};
    float y1=0,p;
    float x1=10;

    for(int i=0;i<=4;i++)
    {
        p=1;
        for(int j=0;j<=4;j++)
        {
            if(i!=j)
            {
                p = p * (x1-x[j])/(x[i]-x[j]);
            }
        }
        y1 = y1 + p * y[i];
    }

    cout<<"The Value at interpolated point is "<<y1<<endl;
    cout<<"Name : Yash Atrey"<<endl;
    cout<<"Enroll no  :: 35520802719"<<endl;
}
