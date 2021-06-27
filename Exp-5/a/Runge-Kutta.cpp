#include<iostream>
#include<bits/stdc++.h>

using namespace std;

float f(int x, int y)
{
    return (y*y-x*x)/(y*y+x*x);
}

int main()
{
    float x0, y0, xn, yn, h, k1, k2, k3, k4, k;
    int i, n;

    cout<<"\tExperiment-5"<<endl;
    cout<<"\tMade By : Yash Atrey"<<endl;
    cout<<"\tRoll No. : 109-CSEA-19"<<endl;
    cout<<"\tDate : 04-05-2021\n"<<endl;

    cout<<"x0 :";
    cin>>x0;
    cout<<"y0 : ";
    cin>>y0;
    cout<<"xn : ";
    cin>>xn;
    cout<<"Enter no of steps : ";
    cin>>n;

    h = (xn - x0)/(n);

    for(int i=0;i<n;i++)
    {
        k1 = h * (f(x0, y0));
        k2 = h * (f((x0+h/2), (y0+k1/2)));
        k3 = h * (f((x0+h/2), (y0+k2/2)));
        k4 = h * (f((x0+h/2), (y0+k3/2)));
        k = (k1+2*k2+2*k3+k4) / 6;
        yn = y0 + k;
        cout<<x0<<"\t"<<y0<<"\t"<<yn<<"\t"<<endl;
        x0 = x0+h;
        y0 = yn;
    }

    cout<<"Value of y at x = "<<xn<<" is : "<<yn<<endl;

    return 0;
}
