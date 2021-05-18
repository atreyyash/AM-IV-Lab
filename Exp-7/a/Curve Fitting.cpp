#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//Write a program to fit the equation of a line of the form y = a + bx for th following data
//x :: 1    2   3   4   5
//y :: 14   27  40  55  68

int main()
{
    cout<<"\t\t\t\t\t\tExperiment-7"<<endl;
    cout<<"\t\t\t\t\t\tMade By : Yash Atrey"<<endl;
    cout<<"\t\t\t\t\t\tRoll no. : 109-CSEA-19"<<endl;
    cout<<"\t\t\t\t\t\tDate : 18-05-2021"<<endl;

    cout<<"Write a program to fit the equation of a line of the form y = a + bx for th following data"<<endl;
    cout<<"x :: 1    2   3   4   5"<<endl;
    cout<<"y :: 14   27  40  55  68"<<endl;
    int sumx=15, sumy=204, sumxy=748, sumx2=55, n=5;
    float a, b;

    a = ((sumy*sumx2) - (sumx*sumxy)) / ((n*sumx2) - (sumx*sumx));
    b = ((n*sumxy) - (sumy*sumx)) / ((n*sumx2) - (sumx*sumx));

    cout<<"\n\nEquation beacomes : "<<endl;
    cout<<"5a + 15b = 204   --eq1"<<endl;
    cout<<"15a + 55b = 748  --eq2"<<endl;

    cout<<"Values of a & b are : "<<endl;
    cout<<"\t\tA : "<<a<<endl;
    cout<<"\t\tB : "<<b<<endl;

    return 0;
}
