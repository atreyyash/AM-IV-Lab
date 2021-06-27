#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/* Write a program to evaluate y for x=10 using Langrange's Interpolation formula, from the following data
        x :     5   6   9   11
        y :     12  13  14  16*/

int main()
{
    cout<<"\tExperiment-4"<<endl;
    cout<<"\tMade By :  : Yash Atrey"<<endl;
    cout<<"\tRoll No. : 109-CSEA-19"<<endl;

    cout<<"Write a program to evaluate y for x=10 using \nLangrange's Interpolation formula, from the following data\n";
    cout<<"\tx :     5   6   9   11\n";
    cout<<"\ty :     12  13  14  16\n";
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

    cout<<"\n\nThe Value at interpolated point is "<<y1<<endl;

}
