#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int rows1, col1, rows2, col2,a[3][3], b[3][3], c[3][3], d[3][3], e[3][3];

    cout<<"Enter rows of matrix A ::  ";
    cin>>rows1;
    cout<<"Enter Column of matrix A :: ";
    cin>>col1;
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter rows of matrix B  ::   ";
    cin>>rows2;
    cout<<"Enter column of matrix B  :: ";
    cin>>col2;
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"Matrix A :: "<<endl;
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Matrix B  :: "<<endl;
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Sum of matrix A and B  ::  "<<endl;
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Subtraction of B and A  :: "<<endl;
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            d[i][j] = b[i][j] - a[i][j];
            cout<<d[i][j]<<"\t";
        }
        cout<<endl;
    }


    cout<<"Multiplication of Matrix A and B  :: "<<endl;
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            e[i][j] = a[i][j] * b[i][j];
            cout<<e[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
